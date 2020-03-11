#include <bits/stdc++.h>
using namespace std;

const int MAX = 10e5;
int a[MAX], sum[MAX];

int t, n;
bool flag;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        memset(sum, 0, sizeof(sum));
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0) sum[i] = a[i];
            else sum[i] = sum[i - 1] + a[i];
        }
        if (n == 1) cout << "YES" << endl;
        else if (n == 2) cout << "NO" << endl;
        else {
            flag = false;
            for (int i = 1; i < n; i++) {
                if (sum[i - 1] == sum[n - 1] - sum[i]) {
                    flag = true;
                    break;
                }
            }
            cout << (flag ? "YES" : "NO") << endl;
        }
    }
    return 0;
}