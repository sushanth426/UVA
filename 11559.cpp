#include <iostream>
using namespace std;
int main(){
    int n, b, h, w, beds, p, sol;
    while(scanf("%d %d %d %d", &n, &b, &h, &w) == 4){
        sol = b+1;
        for(int i = 0; i < h; i++){
            scanf("%d", &p);
            for(int j = 0; j < w; j++){
                scanf("%d", &beds);
                if(beds >= n)
                    sol = min(sol, n * p);
            }
        }
        if(sol > b) cout << "stay home" << endl;
        else cout << sol << endl;
    }
    return 0;
}