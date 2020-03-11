#include<bits/stdc++.h>
using namespace std;

string s;
int n, tc, i, j;
int main() {
    tc = 0;
    scanf("%d", &n);
    while(n--) {
        int ans[128] = {}, stk[128];
        j = -1;
        cin >> s;
        for(i = 0; s[i]; i++) {
            if(j < 0 || stk[j] != s[i]) {
                stk[++j] = s[i];
                ans[s[i]]++;
            } else {
                j--;
                if(j >= 0)
                    ans[stk[j]]++;
            }
        }
        ans[s[0]]--;
        printf("Case %d\n", ++tc);
        for(i = 'A'; i <= 'Z'; i++)
            if(ans[i])
                printf("%c = %d\n", i, ans[i]);
    }
    return 0;
}
