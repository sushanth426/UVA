#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int TC;
    int arr[3];
    scanf("%d", &TC);
    for(int i = 1; i <= TC; i++){
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        sort(arr, arr+3);
        printf("Case %d: %d\n", i, arr[1]);
    }
    return 0;
}