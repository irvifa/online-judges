#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n, k, i, j, ans;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d %d",&n,&k);
    v.resize(n);
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);
    ans = 0;
    for(i = 0; i < n; i++)
        for(j = i+1; j < n; j++)
            if((v[i]+v[j])%k == 0) ans++;
    
    printf("%d\n", ans);
    return 0;
}

