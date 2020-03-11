#include <bits/stdc++.h>
using namespace std;

int i, n;
vector< pair<int, int> > v; 
int main() {
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		if(n%i == 0) 
			v.push_back(make_pair((int)abs(i-n/i),i));
	}
	sort(v.begin(),v.end());
	cout << v[0].second << " " << n/v[0].second << endl;
	return 0;
}
