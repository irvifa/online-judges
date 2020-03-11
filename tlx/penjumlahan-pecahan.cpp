#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll gcd(int a, int b) {
	if(b == 0) return a;
	return gcd(b,a % b);
}

int a, b, c, d, fa, fs;
ll e, f, tmp;
int main() {
	cin >> a >> b >> c >> d;
	
	tmp = gcd(b,d);
	b /= tmp, d /= tmp;
	a *= d, c *= b;
	e = a+c, f = b*d*tmp;
	tmp = gcd(e,f);
	while(tmp != 1) {
		e /= tmp, f /= tmp;
		tmp = gcd(e,f);
	}
	cout << e << " " << f << endl;
	return 0;
}
