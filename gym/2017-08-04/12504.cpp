#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vii;

const int SZ = 300;
int t, i, idx, afs, flag;
string OLD, NEW;
map<string, string> O, N;
int main() {
    cin >> t;
    while(t--) {
        cin >> OLD >> NEW;
        char key[SZ], val[SZ];
        for(i = 1; OLD[i]; i++) {
            idx = 0;
            while(OLD[i] != ':')
                key[idx++] = OLD[i++];
            key[idx] = '\0';
            idx = 0, i++;
            while(OLD[i] != ',' && OLD[i] != '}')
                val[idx++] = OLD[i++];
            val[idx] = '\0';
            O[key] = val;
        }
        for(i = 1; NEW[i]; i++) {
            idx = 0;
            while(NEW[i] != ':')
                key[idx++] = NEW[i++];
            key[idx] = '\0';
            idx = 0, i++;
            while(NEW[i] != ',' && NEW[i] != '}')
                val[idx++] = NEW[i++];
            val[idx] = '\0';
            N[key] = val;
        }
        
        flag = 0, afs = 0;
        for(auto it : N) {
            if(!O.count(it.first)) {
                if(!flag) printf("+");
                else printf(",");
                cout << it.first;
                flag = 1;
            }
        }
        
        if(flag) puts("");
        afs += flag, flag = 0;
        for(auto it: O) {
            if(!N.count(it.first)) {
                if(!flag) printf("-");
                else printf(",");
                cout << it.first;
                flag = 1;
            }
        }

        if(flag) puts("");
        afs += flag, flag = 0;
        for(auto it : N) {
            if(O.count(it.first)) {
                if(it.second != O[it.first]) {
                    if(!flag) printf("*");
                    else printf(",");
                    cout << it.first;
                    flag = 1;
                }
            }
        }
        
        if(flag) puts("");
        afs += flag, flag = 0;
        if(!afs) puts("No changes");
        puts("");
        O.clear();
        N.clear();
    }
    return 0;
}