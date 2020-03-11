#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;

struct job {
    int s, f;
};

bool cmp(const job &a, const job &b) {
    if(a.f != b.f) return a.f > b.f;
    return a.s < b.s;
}

int n, m, afs, i, j, k, tmp;
vector<job> v;
int main() {
    cin >> n;
    while(n--) {
        cin >> m;
        while(m--) {
           cin >> j >> k;
           v.push_back({j,k}); 
        }
        sort(v.begin(), v.end(), cmp);
        
        afs = 0, tmp = 0;
        for(auto &e: v) {
            tmp += e.s;
            afs = max(afs, tmp+e.f);

        }
        // cout << "asem2 jawa " << endl;
        cout << afs << endl;
        v.clear();
    }
    return 0;
}