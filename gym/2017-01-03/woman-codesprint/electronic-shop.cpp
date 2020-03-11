#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int s, n, m, i, ans, j;
vector<int> k, p;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%d %d %d",&s,&n,&m);
    k.resize(n);
    p.resize(m);
    for(i = 0; i < n; i++)
        scanf("%d",&k[i]);
    for(i = 0; i < m; i++)
        scanf("%d",&p[i]);
    sort(k.begin(),k.end());
    sort(p.begin(),p.end());
    int ans = -1;
    for (i = n - 1, j = 0; i >= 0; i--) {
        if (k[i] >= s) continue;
        for (; j < m; j++) {
            if (k[i] + p[j] > s) break;
            ans = max(ans, k[i] + p[j]);
        }
    }
    printf("%d\n",ans);
    return 0;
}

