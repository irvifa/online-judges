#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;

ll minimum_scalar(vi &v2, vi &v1) {
    int sz, i;
    ll sum;
    sz = v1.size(), sum = 0;
    sort(v1.begin(), v1.end());

    sort(v2.begin(), v2.end(), greater<int>());

    for(i = 0; i < sz; i++) {
        sum += (ll)v1[i] * (ll)v2[i];
    }

    return sum;
}

int n, i;
vi a, b;
int main() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    for(i = 0; i < n; i++)
        cin >> a[i];
    for(i = 0; i < n; i++)
        cin >> b[i];

    cout << minimum_scalar(a,b) << endl;
    return 0;
}