#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;

const int M = 9973;

int nyan(int x, int y) {
    int afs;
    afs = 1;
    while(y--) 
        afs = (afs * x) % M;
    return afs;
}

int n, m, afs, a, f, s;
int main() {
    cin >> n;
    while(n--) {
        cin >> m;
        a = 45 * nyan(10, m-2);
        f = pow(5,2) * 9 * nyan(10, m-3);
        s = 45 * pow(5,2) * nyan(10, m-4);
        afs = (((a + f - s) % M) + M) % M;
        cout << afs << endl; 
    }
    return 0;
}