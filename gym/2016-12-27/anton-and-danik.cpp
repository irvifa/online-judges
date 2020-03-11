#include <bits/stdc++.h>
using namespace std;

string s;
int a, d, i, n;
int main() {
	cin >> n;
	cin >> s;
	a = 0, d = 0;
	for(i = 0; i < s.length(); i++) {
		if(s[i]=='A') a++;
		else if(s[i] == 'D') d++;
	}
	if(a>d) puts("Anton");
	else if(a<d) puts("Danik");
	else puts("Friendship");
}
