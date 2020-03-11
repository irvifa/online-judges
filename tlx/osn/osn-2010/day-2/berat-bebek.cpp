#include <bits/stdc++.h>
using namespace std;

int i, n;
int main() {
	while(!cin.eof()) {
		vector<int> v;
		while(!cin.eof()) {
			cin >> n;
			if(n) v.push_back(n);
			else break; 
		}
		if(!v.empty()) {
			sort(v.begin(), v.end());
			printf("%d %d\n", v[0], v[v.size()-1]);
		}
	}
	return 0;
}