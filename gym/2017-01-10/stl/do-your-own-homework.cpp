#include<bits/stdc++.h>
using namespace std;

int n, t, v, tc;
string s, k;
int main() {
	tc = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &t);
		map<string, int> m;
		while(t--) {
			cin >> k >> v;
			m.insert(make_pair(k, v));
		}
		scanf("%d", &t);
		cin >> s;
		if(!m.count(s))
			printf("Case %d: Do your own homework!\n", ++tc);
		else {
			if(m[s] > t && m[s] <= t + 5) 
				printf("Case %d: Late\n", ++tc);
			else if(m[s] > t + 5)
				printf("Case %d: Do your own homework!\n", ++tc);
			else
				printf("Case %d: Yesss\n", ++tc);
		}
	}
	return 0;
}
