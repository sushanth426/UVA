#include <iostream>
using namespace std;
int main(){
    int TC, a, b;
    scanf("%d", &TC);
    while(TC--){
        scanf("%d %d", &a, &b);
        if(a < b)
            cout << "<" << endl;
        else if(a > b)
            cout << ">" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}