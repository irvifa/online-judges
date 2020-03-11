#include <bits/stdc++.h>
using namespace std;

const int N = 22;

int dist(string s) {
    int t = INT_MAX;
    for (int i = 0; i + 1 < s.size(); i++) t = min(t, abs(s[i + 1] - s[i]));
    return t;
}

struct prm {
    string s;
    int d;
    prm() {}
    prm(string _s) {
        s = _s;
        d = dist(s);
    }
    
    bool operator < (prm X) const {
        if (d != X.d) return d > X.d;
        return s < X.s;
    }
};

string s, t;
int i;
vector <prm> v;
int main() {
	v.resize(N);
    while (getline(cin, s)) {
        v[0] = prm(s), t = s;
        
        for (i = 1; i < 11; i++) {
            prev_permutation(t.begin(), t.end());
            v[i] = prm(t);
        }
        
        t = s;
        for (i = 11; i < 21; i++) {
            next_permutation(t.begin(), t.end());
            v[i] = prm(t);
        }
        
        sort(v.begin(), v.end());
        cout << v[0].s << v[0].d << endl;
    }
    return 0;
}
