#include <bits/stdc++.h>
using namespace std;

string s;
bool afs;
int i;
int main() {
    cin >> s;
    afs = 0;
    
    for (i = 0; i < (s.length() - 1); ++i) {
		if (s[i] == s[i + 1]) {
		  s.erase(s.begin() + i);
		  s.erase(s.begin() + i);

		  if (s.length() == 0) {
		      afs = 1;
		      break;
		  }    
		  i = -1;
		}
    }
	if (afs) puts("Empty String");
	else cout << s << endl;

    return 0;
}
