#include <bits/stdc++.h>
using namespace std;

// Brain's photos

bool flag;
int n, i;
int main() {
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		if(i > 1) cout << " that ";
		if(i & 1) cout << "I hate";
		else cout << "I love";
	}
	cout << " it";
	return 0;
}
