#include<bits/stdc++.h>
using namespace std;

const int N = 10;

int n, i, r, tc;
string s;
int main() {
	tc = 0;
	scanf("%d", &n);
	while(n--) {
		multimap<int, string> m;
		for(i = 0; i < N; i++) {
			cin >> s >> r;
			m.insert(make_pair(r,s));
		}
		
		//cout << "asem2 jawa " + n << endl;
		auto ma = std::max_element(m.begin(), m.end(), m.value_comp());
		
		printf("Case #%d:\n", ++tc);
		for(auto e: m)
			if(ma->first == e.first)
				cout << e.second << endl;		
	}
	return 0;
}
