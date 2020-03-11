#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// http://codeforces.com/problemset/problem/725/B

int getPos(char c){
	if(c=='f') return 1;
	else if(c=='e') return 2;
	else if(c=='d') return 3;
	else return 4 + c - 'a';
}

ll solve(ll n, int a) {
	ll ans = a;
	n--;
	
	if(n%4==0) {
		ans+= 12*(n/4);
		ans+= n;
	} else if(n%4==1) {
		ans += 12*(n/4);
		ans += 6;
		ans += n;
	} else if(n%4==2) {
		ans += 12*(n/4);
		ans += n-2;
	} else {
		ans += 12*(n/4);
		ans += 6;
		ans += n-2;
	}
	
	return ans;
}

string ss;
int i;
char s;
ll ans, n;
int main(){
	cin >> ss;
	n= 0;
	s= ss[ss.length()-1];
	
	for(i=0; i<ss.length()-1; i++)
		n= n*10 + (ss[i]-'0');

	ans= solve(n, getPos(s));
	
	cout << ans << endl;
	return 0;
}
