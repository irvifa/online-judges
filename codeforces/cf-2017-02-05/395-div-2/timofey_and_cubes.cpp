#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000010;
int n, i;
int a[MAXN]; 
int main() {
  scanf("%d\n", &n);
  for(i =0; i < n; i++) scanf("%d", &a[i]);
  
  for (i = 0; i <= n - i - 1; ++i) {
    if (i % 2 - 1)
      swap(a[i], a[n - i - 1]);
  }
  
  for(i =0; i < n; i++) {
    if (i)
      printf(" ");
    printf("%d", a[i]);
  }
  
  return 0;
}
