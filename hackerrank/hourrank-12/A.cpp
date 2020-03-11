#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
ll n, cnt, ans, i;    
int main(){
    cin >> s;
    cnt=0;
    cin >> n;
    for(i=0;i<s.size();i++)
        if(s[i] == 'a') cnt++;
    
    ans = 0;
    ans = n/s.size();
    ans*=cnt;
    if((n%s.size())){
        ll r = n%s.size();
        for(i=0;i<r;i++){
            if(s[i] == 'a') ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
