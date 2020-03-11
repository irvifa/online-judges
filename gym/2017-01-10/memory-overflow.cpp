#include<bits/stdc++.h>
using namespace std;

const int N = 26;
int t, tc, n, k, i, ans;
string s;
int main() {    
    tc = 0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &k);
        cin >> s;
        int r[N] = {};
        ans = 0;
        
        for(i = 0; i < N; i++)
            r[i] = -0xfff;
        
        for(i = 0; i < n; i++) {
            if(i-r[s[i]-'A'] <= k)
                ans++;
            r[s[i]-'A'] = i;
        }
        printf("Case %d: %d\n", ++tc, ans);
    }
    return 0;
}
