#include <bits/stdc++.h>
using namespace std;

int i;
string s;
map <string, string> m;
void pre() {
	m.insert(make_pair("HELLO","ENGLISH"));
	m.insert(make_pair("HOLA","SPANISH"));
	m.insert(make_pair("HALLO","GERMAN"));
	m.insert(make_pair("BONJOUR","FRENCH"));
	m.insert(make_pair("ZDRAVSTVUJTE","RUSSIAN"));
	m.insert(make_pair("CIAO","ITALIAN"));
}

int main() {
	i = 0;
	pre();
	while (getline(cin,s),(s!="#")) {
		if(m.find(s)!=m.end())
			cout << "Case " << ++i << ": " << m[s] << endl;
		else 
			cout << "Case " << ++i << ": UNKNOWN" << endl;
	}
	return 0;
}
