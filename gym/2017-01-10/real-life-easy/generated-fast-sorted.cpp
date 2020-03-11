#include<bits/stdc++.h>
using namespace std;

string s;
int n;
int main() {
	cin >> n;
	while(n--){
		cin >> s;
		sort(begin(s), end(s));
		cout << s << endl;
		while(next_permutation(begin(s), end(s))){
			cout << s << endl;
		}
		cout << endl;
	}
	return 0;
}

