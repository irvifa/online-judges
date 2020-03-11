#include <bits/stdc++.h>
using namespace std;

string s;
int n, i, ans;
int main() {
	cin >> n;
	cin >> s;
	
	ans = 0;
	for(i = 0 ; i < s.length() && s[i] == '<' ; i++)
		ans++;
	for(i = s.length() - 1; i >= 0 && s[i] == '>' ; i--)
		ans++;
		
	cout << ans << endl;
	return 0;
}
