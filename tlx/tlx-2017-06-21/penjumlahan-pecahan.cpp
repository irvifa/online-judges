#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll gcd(ll a, ll b) {
	if(b==0) return a;
	return gcd(b,a%b);
}

void simpliest(ll &f, ll &e) {
    ll com;

    com = gcd(e,f);
 
    f = f/com;
    e = e/com;
}

void addFraction(ll a, ll b, ll c, 
                 ll d, ll &e, ll &f) {
    
    f = gcd(b,d);
 	//cout << "asem jawa " << f << " " << b << " " << d  << " " << b*d << " " << (b*d)/f << endl;
    f = (b*d) / f;
 	//cout << "asem1 jawa " << f/b << " " << f/d << endl;
    e = (a)*(f/b) + (c)*(f/d);
 	//cout << "asem2 jawa " << e << " " << f << endl;
    simpliest(f,e);
}

ll a, b, c, d;
ll e, f;
int main(){
	cin >> a >> b;
	cin >> c >> d;
	addFraction(a, b, c, d, e, f);
	cout << e << " " << f << endl;
    return 0;
}
