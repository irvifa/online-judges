#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll gcd(int a, int b) {
	if(b == 0) return a;
	return gcd(b,a % b);
}

ll lcm(vector<int> &v) {
	ll ret;
	int i, n;
	ret = v[0], n = v.size();
	for(i = 1; i < n; i++) {
		ret = (v[i]*ret)/gcd(ret,v[i]);
	}
	return ret;
}

int n, i;
vector<int> v;
int main() {
	cin >> n;
	v.resize(n);
	for(i = 0; i < n; i++) {
		cin >> v[i];
	}
	cout << lcm(v) << endl;
	return 0;
}
