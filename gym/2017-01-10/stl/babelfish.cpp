#include<bits/stdc++.h>
using namespace std;

map<string, string> m;
string k, v, s;
int main() {
	while(getline(cin, s), s!="") {
		stringstream ss;
		ss << s;
		ss >> v >> k;
		m.insert(make_pair(k, v));
	}
	
	while(cin >> s) {
		if(!m.count(s)) puts("eh");
		else cout << m[s] << endl;
	}
	
	return 0;
}
