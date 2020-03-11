#include<bits/stdc++.h>
using namespace std;

const int N = 110;
string a[N], f[N];
int lcs[N][N] = {0};
int pre[N][N];
int m, n, i, j;
vector<string *> ans;

int main() {
	while (true) {
        n = 1, m = 1;
        while (cin >> a[n] && a[n] != "#") ++n;
        while (cin >> f[m] && f[m] != "#") ++m;

        if (n == 1) return 0;

        for (i = 1; i < n; ++i) {
            for (j = 1; j < m; ++j) {
                if (a[i] == f[j]) {
                    lcs[i][j] = lcs[i-1][j-1] + 1;
                    pre[i][j] = 0;  
                }
                else {
                    if (lcs[i-1][j] > lcs[i][j-1]) {
                        lcs[i][j] = lcs[i-1][j];
                        pre[i][j] = 1; 
                    }
                    else {
                        lcs[i][j] = lcs[i][j-1];
                        pre[i][j] = 2; 
                    }
                }
            }
        }
        
		ans.clear();
        i = n - 1, j = m - 1;
        while (i && j) {
            if (pre[i][j] == 0) {
                ans.push_back(&a[i]);
                --i, --j;
            }
            else if (pre[i][j] == 1) --i;
            else --j;
        }
        if (!ans.empty()) {
            cout << **ans.rbegin();
            for (auto iter = ans.rbegin() + 1; iter != ans.rend(); ++iter)
                cout << ' ' << **iter;
        }
        cout << endl;
    }
}
