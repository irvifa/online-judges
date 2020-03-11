#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;

int t, n, i, j, r, c, afs;
bool flag;
vector<vi > v;
int main() {
    cin >> n;
    for(i = 0; i < n; i++) {
    	vi tmp;
    	for(j = 0; j < n; j++) {
    		cin >> t;
    		tmp.push_back(t);
    	}
    	v.push_back(tmp);
    }
    for(i = 0; i < n; i++) {
    	for(j = 0; j < n; j++) {
    		if(v[i][j]==1) continue;
    		flag = 0;
    		for(r = 0; r < n; r++){
                if(r == i) continue;
                for(c = 0; c < n; c++){
                    if( c == j) continue;
                    afs = v[r][j] + v[i][c];
                    if(afs == v[i][j]){
                        flag = 1;
                        break;
                    }
                }
                if(flag) break;
            }
            if(!flag){
                puts("No");
                return 0;
            }
    	}
    }
    puts("Yes");
    return 0;
}
