#include <bits/stdc++.h>
using namespace std;

int i, j, n, a, s, af;
bool flag, afs;
vector<int> f;
int main() {
	cin >> n;
    while(n--) {
        cin >> a;
        afs = 1;
        for(i = 0; i < a; i++) {
		    cin >> s;
		    f.push_back(s);
		}
        if(a%2==1) a++;
        af = a/2;
        if(f[0] !=  1) {
        	afs = 0;
        }
        s = f[0];
   		for(i = 1; i < af && afs; i++) {
		    if(f[i] - s != 1) {
		    	afs = 0;
		    	break;
		    }
		    s = f[i];
        }
        a--;
        for(;i < a && afs; i++) {
		    if(f[i] - s != -1) {
		    	afs = 0;
		    	break;
		    }
		    s = f[i];
        }
        if (f[a-1] != 1) afs = 0;
        if(afs) puts("yes");
        else puts("no");
        f.clear();
        //cout << endl;
    }
    return 0;
}
