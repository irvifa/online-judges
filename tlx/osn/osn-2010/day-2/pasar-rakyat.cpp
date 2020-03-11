#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}

int lcm(vector<int> a, int n) {
  int res = 1, i;
  for (i = 0; i < n; i++) {
    res = res*a[i]/gcd(res, a[i]);
  }
  return res;
}

int i, a, n;
vector<int> v;
int main() {
	scanf("%d", &a);
	while(a--) {
		scanf("%d", &n);
		v.push_back(n);
	}
	printf("%d\n", lcm(v, v.size()));
	return 0;
}