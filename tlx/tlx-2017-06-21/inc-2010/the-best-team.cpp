#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int afs, t, n, i, j, k;
int P[55][55];
int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        vector<vi > P(n, vi(n));
        for (i = 0; i < n; i++)
          for (j = 0; j < n; j++)
            cin >> P[i][j];
        
        afs = 0;
        for(i = 0; i < n; i++)
          for(j = i + 1; j < n; j++)
            for(k = j + 1; k < n; k++)
              afs = max(afs,P[i][j]*P[i][k]*P[j][k]);
        cout << afs << endl;
    }
    return 0;
}