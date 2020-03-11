#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll n, i, len, ans;
string s;
int main() {
    cin >> s;
    cin >> n;;
    len = s.length();
    ans = 0;
    for(i = 0; i < len; i++)
        if(s[i] == 'a') ans++;
    
    ans *= n/len;
    n -= (n/len*len);
    
    for(i = 0; i < n; i++)
        if(s[i] == 'a') ans++;
    
    cout << ans << endl;
    return 0;
}