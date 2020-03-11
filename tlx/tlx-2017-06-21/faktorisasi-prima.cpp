#include <bits/stdc++.h>
using namespace std;

vector<bool> primes;
void pre(int n) {
	fill(primes.begin(),primes.end(),0);
	for (int i=2 ; i*i<=n ; i++) {
		if (n % i == 0) primes[i] = 1;
	}
}

int n, i, sz;
map<int, int> m;
int main(){
	cin >> n;
	primes.resize(sqrt(n));
	pre(n);
	
	for(i = 0; i < n; i++) {
		if(primes[i] && n%i == 0) {
			m.insert(make_pair(i,1));
			n/=i;
			//cout << "here" << endl;
			while(n%i == 0)
				m[i]++, n/=i;
		}
	}
	if(n!=1)
		m.insert(make_pair(n,1));
	i = 0, sz = m.size();
	for(auto e: m) {
		if(e.second == 1)
			cout << e.first;
		else
			cout << e.first << "^" << e.second;
		
		if(i != sz-1)
			cout << " x ";

		i++;
	}
	cout << endl;       
    return 0;
}
