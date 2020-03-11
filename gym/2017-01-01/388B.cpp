#include <bits/stdc++.h>
using namespace std;

const int N = 3;
vector<int> xs(N), ys(N);
int i, j, k;
int x, y;
set<pair<int, int>> st;
int main() {
    for (i = 0; i < 3; i++) {
        cin >> xs[i] >> ys[i];
    }

    for (i = 0; i < N; i++) {
        j = (i + 1) % N;
        k = (i + 2) % N;
        x = xs[i] + (xs[j] - xs[i]) + (xs[k] - xs[i]);
        y = ys[i] + (ys[j] - ys[i]) + (ys[k] - ys[i]);
        st.emplace(x, y);
    }

    cout << st.size() << endl;
    for (auto e : st) {
        cout << e.first << " " << e.second << endl;
    }
}
