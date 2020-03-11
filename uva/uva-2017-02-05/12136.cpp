#include <bits/stdc++.h>
using namespace std;

int n, tc;
int a, b, c, d;
int e, f, g, h;
int main() {
    n, tc = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d:%d %d:%d", &a, &b, &c, &d);
        a = a*60 + b, c = c*60 + d;
        scanf("%d:%d %d:%d", &e, &f, &g, &h);
        e = e*60 + f, g = g*60 + h;
        printf("Case %d: ", ++tc);
        if(c < e || a > g)
            puts("Hits Meeting");
        else
            puts("Mrs Meeting");
    }
    return 0;
}
