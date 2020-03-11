#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;

int t, n, i, afs, hm;
stack<int> s;
string nyan;
int main() {
    cin >> n;
    afs = 0, hm = 1;
    for(i = 0; i < 2*n; i++) {
    	cin >> nyan;
    	if(nyan[0] == 'a') {
    		cin >> t;
    		s.push(t);
    	} else if(nyan[0] == 'r') {
    		if(!s.empty()) {
    			if(s.top() == hm) {
    				s.pop();
    			} else {
    				while(!s.empty()) s.pop();
    				afs++;
    			}
    		}
    		hm++;
    	}
    }
    cout << afs << endl;
    return 0;
}
