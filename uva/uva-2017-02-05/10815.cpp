#include <bits/stdc++.h>
using namespace std;

char to_lower(char c){
  if(c<='Z' && c>='A')
    return c-('Z'-'z');
  return c;
} 

string pre(string s) {
	transform(s.begin(), s.end(), s.begin(), to_lower);
	s.erase (remove_if (s.begin (), s.end (), ::ispunct), s.end ());
	return s;
}

set<string> st;
string s;
int main() {
	while(cin >> s)		
		st.insert(pre(s));
	
	for(auto &e: st)
		cout << e << endl;
	
	return 0;
}
