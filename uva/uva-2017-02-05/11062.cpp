#include <bits/stdc++.h>
using namespace std;

char to_lower(char c){
  if(c<='Z' && c>='A')
    return c-('Z'-'z');
  return c;
} 

string pre(string s) {
	transform(s.begin(), s.end(), s.begin(), to_lower);
	return s;
}

string remove_punct(string s) {
	s.erase (remove_if (s.begin (), s.end (), ::ispunct), s.end ());
	return s;
}

set<string> st;
string s, t;
int main() {
	while(cin >> s) {
		s = pre(s);
		while(s[s.length()-1] == '-') {
			cin >> t;
			s += pre(t);
		}
		st.insert(remove_punct(s));
	}
	
	for(auto &e: st)
		cout << e << endl;
	
	return 0;
}
