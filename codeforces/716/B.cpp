#include <bits/stdc++.h>
using namespace std;

const int N = 10000;
int cnt[27];
string s; int n;

bool is_valid() {
	for(int i = 0; i < 26; i++)
		if(cnt[i] >= 2) return false;

	return true;
}

void solve() {
	for(int i = 0; i < n; i++)
		if(s[i] == '?') s[i] = 'A';
}

int main() {
	cin >> s;
	n = s.length();
	if(n < 26) {cout << -1; return 0;}

	for(int i = 25; i < n; i++) {
		memset(cnt, 0, sizeof(cnt));
		
		for(int j = i; j >= i - 25; j--)
			cnt[s[j]-'A']++;
		
		if(is_valid()) {
			int curr = 0;
			while(cnt[curr]>0) curr++;
			for(int j = i - 25; j <= i; j++) {
				if(s[j] == '?') {
					s[j] = curr + 'A';
					curr++;
					while(cnt[curr]>0) curr++;
				}
			}
			solve();
			cout << s;
			return 0;
		}
	}

	cout << -1;
	return 0;
}