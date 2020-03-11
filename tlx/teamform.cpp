#include <bits/stdc++.h>
using namespace std;

int a, i, f, n, b, e;
set<int> s;
int main() {
	cin >> n;
	while(n--) {
		cin >> a >> f;
		for(i = 0; i < f; i++) {
			cin >> b >> e;
			if(!s.count(b)) s.insert(b);
			if(!s.count(e)) s.insert(e);
		}
		//cout << a << " " << s.size() << endl;
		if(a%2 == 0 && (a - s.size())%2 == 0) puts("yes");
		else puts("no");
		s.clear();
	}
	return 0;
}
