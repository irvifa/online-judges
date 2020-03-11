#include<bits/stdc++.h>
using namespace std;

const int N = 10e4;

int n, m, i, x, r, c, flag, cnt;
int main() {
    while(scanf("%d %d", &n, &m) == 2) {
        int courses[N] = {};
        for(i = 0; i < n; i++) {
            scanf("%d", &x);
            courses[x] = 1;
        }
        
        flag = 1;
        
        for(i = 0; i < m; i++) {
            scanf("%d %d", &r, &c);
            cnt = 0;
            while(r--) {
                scanf("%d", &x);
                cnt += courses[x];
            }
            flag &= cnt >= c;
        }
        puts(flag ? "yes" : "no");
    }
    return 0;
}
