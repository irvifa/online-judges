#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull; 
 
bool check(ll a,ll b){
    while(b){
        if(b%10 >= a) return false;
        b/=10;
    }
    return true;
}

ll to_base10(ll a,ll b){
    ll ans, cnt;
    ans=0, cnt=0;
    while(b){
        ans += pow(a, cnt)*(b % 10);
        b/=10;
        cnt++;
    }
    return ans;
}

ll t, i;
map<ll, ll> m;
ull ans, tmp;
int main() {   
    scanf("%d", &t);
    while(t--){
        ll a,b;
        scanf("%lld %lld", &a, &b);
        if(check(a,b)){
            i = to_base10(a,b);
            if(!m.count(i)) m[i]=1;
            else m[i]++;
        }
    }
    
    ans=0;
    
    for(auto& it : m) {
		tmp = it.second;
    	tmp = tmp*(tmp-1)/2 ;
    	ans += tmp; 
    }
    
    cout << ans << endl;
    return 0;
}
