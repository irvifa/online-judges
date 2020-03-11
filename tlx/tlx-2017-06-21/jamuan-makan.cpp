#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

struct cmp {
    bool operator () (const pii &left, const pii &right) {
        if(left.second < right.second) return true;
        if(left.second == right.second) return left.first < right.first;
        return false;
    }
};

int n, i, a, f, afs, j;
vector<pii> v;
int main() {
    cin >> n;
    
    for(i = 0; i < n; i++) {
        cin >> a >> f;
        v.push_back(make_pair(a,f+a));
    }

    i = 0, afs = 1;
    sort(v.begin(), v.end(), cmp());
    for(j = 1; j < v.size(); j++) { 
        if(v[j].first >= v[i].second) afs++, i = j;
    } 
    
    cout << afs << endl;
    return 0;
}
