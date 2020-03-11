#include<bits/stdc++.h>
using namespace std;

bool cmp(char a, char b){
	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}

string s;
int n;
int main() {
	cin >> n;
	while(n--){
		cin >> s;
		sort(begin(s), end(s), cmp);
		cout << s << endl;
		while(next_permutation(begin(s), end(s), cmp)){
			cout << s << endl;
		}
	}
	return 0;
}
