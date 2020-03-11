#include <bits/stdc++.h>
using namespace std;

const int N = 10005;

bitset <N>col;
bitset <N>row;
int r, c;
int check(int x, int y) {
    if(x < 0 || y < 0 || x >= r || y >= c)
        return 1;
    return row.test(x)|col.test(y);
}

int x, y, n, i, tc;
bool flag;
int main() {
    tc = 0;
    while(scanf("%d %d %d", &r, &c, &n) == 3) {
        if(r == 0)  break;
        row.reset(), col.reset();
        for(i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);
            row.set(x), col.set(y);
        }
        
        scanf("%d %d", &x, &y);
        flag = !check(x, y);
        flag |= !check(x+1, y);
        flag |= !check(x-1, y);
        flag |= !check(x, y+1);
        flag |= !check(x, y-1);
        
        printf("Case %d: ", ++tc);
        if(flag) puts("Escaped again! More 2D grid problems!");
        else puts("Party time! Let's find a restaurant!");
    }
    return 0;
}
