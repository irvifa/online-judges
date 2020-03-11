#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vii;

int n, i, afs, p, s, f, tmp;
int main() {
    cin >> n;
    tmp = 0, afs = 0, p = 0;
    for(i = 0; i < n ; i++) {
        cin >> s >> f;
        tmp -= f;
        if(tmp == 0) afs = max(afs, i + 1 - p), p = i + 1;
        tmp += s;
    }

    cout << afs*10 << endl;;
    return 0;
}