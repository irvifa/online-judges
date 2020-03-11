#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vii;

vi v;
int n, k, m, i, j, sz, afs;
string s;
int main() {
    cin >> n >> k >> m;
    cin >> s;
    for(i = 0; i < n; i++) {
        cin >> j;
        if(s[i] == '1') v.push_back(j);
    }

    sort(v.begin(),v.end(),greater<int>());
    sz = min(k + m ,(int)v.size());
    for(i = 0; i < sz; i++) {
        if(i < k) v[i] = 0;
        else v[i] /= 2;
    }

    afs = 0;
    for(auto e: v) afs += e;
        
    cout << afs << endl;
    return 0;
}