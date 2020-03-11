#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;

ll thin(ll n) {
	return n*(n+1)/2;
}

int t, n, i, x, y;
ll  nyan, afs;
int main() {
    cin >> n >> t;
    afs = INT_MIN;
    for(y = t; y >= 0; y--) {
    	x = n*(t-y);
    	nyan = 0;
    	nyan += (x+1)*thin(y)+(y+1)*thin(x);
    	afs = max(afs,nyan); 
    }
    
    cout << afs << endl;
    return 0;
}
