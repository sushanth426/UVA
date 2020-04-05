#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int h, u, d, f;
    scanf("%d %d %d %d", &h, &u, &d, &f);
    while (h != 0)
    {
        int day = 1; 
        double height = 0;
        double climb = u;
        double fatigue = climb * f / 100; 
        while (true)
        {
            height += climb;
            if (height > h)
            {
                printf("success on day %d\n", day);
                break;
            }
            height -= d;
            if (height < 0)
            {
                printf("failure on day %d\n", day);
                break;
            }
            climb = max(climb - fatigue, 0.0);
            day++;
        }
        scanf("%d %d %d %d", &h, &u, &d, &f);
    }
}