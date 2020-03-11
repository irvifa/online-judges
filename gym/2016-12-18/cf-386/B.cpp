#include<bits/stdc++.h>
using namespace std;

int i, j, n;
string s, ans;
deque <char> d;
int main() {
	cin >> n;
	cin >> s;
	if(s.length()%2==1) {
		for(i = 0; i<s.length(); i++) {	
			char a = s[i];
			if(i%2==0) d.push_back(a);
			else d.push_front(a);
		}
	} else {
		for(i = 0; i<s.length(); i++) {	
			char a = s[i];
			if(i%2==1) d.push_back(a);
			else d.push_front(a);
		}
	}
	ans = "";
	for(i=0; i<n; i++)
		ans+= d.front(), d.pop_front();
	cout << ans << endl;
	return 0;	
}
