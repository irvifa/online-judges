#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vii;

vi a;
int n, k, afs, i;
int main() {
    cin >> n >> k;
    a.resize(n);
    for(i = 0 ; i < n ; i++) 
        cin >> a[i];
    
    sort(a.begin(), a.end(), greater<int>());

    afs = INT_MAX;
    for(i = k - 1 ; i < n ; i++) 
        afs = min(afs, a[i - k + 1] - a[i]);
    
    cout << afs << endl;
    return 0;
}