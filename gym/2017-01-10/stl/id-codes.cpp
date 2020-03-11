#include<bits/stdc++.h>
using namespace std;

string s;
int main() {
	while(cin >> s, s != "#") {
		if(next_permutation(begin(s), end(s))) 
			cout << s << endl;
		else 
			puts("No Successor");
	}
	return 0;
}

