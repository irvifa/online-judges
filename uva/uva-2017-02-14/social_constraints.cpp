#include<bits/stdc++.h>
using namespace std;

const int N = 21;
const int M = 8;
int first[N],second[N],dif[N];
int p[M];
int n,m,i,ans,inc,tmp;
int main() {
    while (scanf("%d %d", &n, &m), n || m) {
        for (i = 0 ; i < m ;i++)
            scanf("%d %d %d",&first[i],&second[i],&dif[i]);
 
        for(i= 0 ; i  < n ; i++)
            p[i] = i;
 
        ans = 0;
        inc = 0;
        do {
            inc = 1;
            for(i =0 ; i < m ; i ++){
                tmp = abs(p[first[i]] - p[second[i]]);
                if ((dif[i]>0 && tmp>dif[i]) || (dif[i]<0 && tmp<-dif[i]) ){
                    inc = 0;
                    break;
                }
            }
            ans += inc;
        } while (next_permutation(p, p+n));
 
        printf("%d\n", ans);
    }
    return 0;
}
