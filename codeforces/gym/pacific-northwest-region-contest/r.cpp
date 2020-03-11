#include <bits/stdc++.h>
using namespace std;

const int maxn = 105;

struct name {
  string first, last;
  bool operator<(const name& a) const {
    if(last != a.last) return last < a.last;
    return first < a.first;
  }
};

name a[maxn];
int n, i;
int main() {
  cin >> n;
  for(i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].last;
  }
  sort(a, a + n);
  for(i = 0; i < n; i++) {
    cout << a[i].first.c_str() << " " << a[i].last.c_str() << endl;
  }
  return 0;
}
