#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;

int n, m, afs, i, j, k, l, tmp;
vector<string> v;
bool nyan;
string s;
int main() {
    cin >> n;
    while(n--) {
        cin >> m;
        for(i = 0; i < m; i++) {
          cin >> s;
          v.push_back(s);
        }

        afs = 0;
        for(i = 0; i < m; i++) {
            for(j = 0; j < m; j++) {
                if(v[i][j] == '.' ) {
                    for(tmp = 1; ; tmp++) {
                        if (i + tmp - 1 >= m || j + tmp - 1 >= m) break;
                        nyan = 1;
                        for(k = i; k <= i + tmp - 1; k++)
                            for(l = j; l <= j + tmp - 1; l++)
                                if (v[k][l] == '#') nyan = 0;
                        
                        if(!nyan) break;
                        afs = max(afs,tmp);
                    }
                }
            }
        }
        cout << afs << endl; 
        v.clear();
    }
    return 0;
}