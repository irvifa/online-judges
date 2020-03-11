#include<bits/stdc++.h>
using namespace std;

int n, ld, lr, ans, i;
string s;
int main() {  
    while (scanf("%d", &n), n) {
        cin >> s;
        ans = n, lr = -n, ld = -n;
        for (i = 0; i < n; ++i) {
            if (s[i] == 'Z') {
                ans = 0;
                break;
            } else if (s[i] == 'R') {
                ans = min(ans, i - ld);
                lr = i;
            } else if (s[i] == 'D') {
                ans = min(ans, i - lr);
                ld = i;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
