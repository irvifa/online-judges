#include <bits/stdc++.h>
using namespace std;
const int INF = 2e9;

int nextPowerOf2(int number) {
    int pos = 0;

    while (number > 0) {
        pos++;
        number = number >> 1; 
    }
    return (int) pow(2, pos);
}

typedef long long int ll;
ll n, p2, t;
int i, ans;
pair<ll,i> a[3];
int main() {
	cin >> n ;
	for(i=0; i<3; i++) {
		cin >> t;
		a[i] = make_pair(t,i);
	}
	ans = 0;
	while(n<) {
		//if((n+i)%4==0) {

		//}
	}
	
	cout << nextPowerOf2(n) << endl;
	return 0;
}