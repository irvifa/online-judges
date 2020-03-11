#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int M = 1e9 + 7;
const int N = 1e6 + 5;

ll fact[N], ifact[N];

ll power(ll a, ll b) {
  if (b == 0) return 1;
  ll tmp = power(a, b / 2);
  tmp = tmp * tmp % M;
  if (b & 1) {
    tmp = tmp * a % M;
  }
  return tmp;
}

ll inv(ll a) {
  return power(a, M - 2);
}

ll c(int n, int k) {
  if (n < k || n < 0 || k < 0) return 0;
  ll tmp = fact[n] * ifact[k] % M;
  tmp = tmp * ifact[n - k] % M;
  return tmp;
}

int t, n, k, i;
ll ans;
int main() {
  fact[0] = ifact[0] = 1;
  for (i = 1; i < N; i++) {
    fact[i] = fact[i - 1] * i % M;
    ifact[i] = inv(fact[i]);
  }
  freopen("galactic.in", "r", stdin); 
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &n, &k);
    if (n < k) {
      puts("0");
      continue;
    }
    ans = c(n, k) * fact[k] % M;
    printf("%I64d\n"ans);
  }

  return 0;
}
