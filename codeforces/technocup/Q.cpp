#include <bits/stdc++.h>
using namespace std;

string s, ans;
int i, n;
int main() {
	cin >> n;
	cin >> s;
	ans = "";
	for(i=0; i<n; ){
		if(s[i]=='o'&&s[i+1]=='g'&&s[i+2]=='o'&&i<n-2){
			ans+="***";
			i+=3;
			while(s[i]=='g'&&s[i+1]=='o'&&i<=n-2)
				i+=2;
		} else {
			ans+=s[i++];
		}
	}
	cout << ans << endl;
	return 0;
}
