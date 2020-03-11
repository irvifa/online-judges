#include<bits/stdc++.h>
using namespace std;

map<char, int> m;

void loop_3(int a, int f, int &i, char &curr) {
	int j;	
	for(i = a; i <= f ; i++) {
		for(j = 1; j <= 3; j++) {	
			m.insert(make_pair(curr, i));
			curr++;
		}
	}
}

void loop_4(int a, int f, int &i, char &curr) {
	int j;	
	for(i = a; i <= f ; i++) {
		for(j = 1; j <= 4; j++) {	
			m.insert(make_pair(curr, i));
			curr++;
		}
	}
}

void pre() {
	int i, j;
	char curr = 'A';
	loop_3(2, 6, i, curr);
	loop_4(i, 7, i, curr);
	loop_3(i, 8, i, curr);
	loop_4(i, 9, i, curr);
}

string s;
int main() {
	pre();	
	while(getline(cin, s)) {
		for(auto e: s) {
			if(e >= '1' && e <= '9') cout << e;
			else if(e >= 'A' && e <= 'Z') {
				cout << m[e];			
			} else cout << e;
		}
		cout << endl;
	}
	return 0;
}
