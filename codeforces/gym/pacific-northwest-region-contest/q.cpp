#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;

int a[maxn];
int n, i;
int main() {
  scanf("%d", &n);
  
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  
  sort(a, a + n);
  
  int ans = 1e9;
  
  for(i = 0; i < n; i++) {
    ans = min(ans, a[i] + a[n - 1 - i]);
  }
  cout << ans << endl;
  return 0;
}
