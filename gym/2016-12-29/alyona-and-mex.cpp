#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 0x3f3f3f3f;
const int N = 2e9;
const int MAXN = 100000 + 5 ;

int n, m, x, y, p, dis, i;
int a[MAXN];
int main() {
    while (~scanf("%d %d",&n,&m)) {
        dis = INF;
        for(i = 1; i <= m; i++) {
            int u, v;
            cin >> u >> v;
            if (dis > v - u + 1) {
                dis = v - u + 1;
                x = u, y = v;
            }
        }
        
        
        printf("%d\n",dis);
        p = 0;
        for(i = x; i <= y; i++)
            a[i] = p++;
        
        p = 0;
        for(i = y + 1; i <= n; i++) {
            a[i] = p % dis;
            p++;
        }
        
        p = N - N % dis - 1;
        for(i = x - 1; i >= 0; i--) {
            a[i] = p % dis;
            p--;
        }
        
        for(i = 1; i <= n; i++)
        	printf("%d ", a[i]);
    }
    return 0;
}
