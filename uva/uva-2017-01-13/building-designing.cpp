#include<bits/stdc++.h>
using namespace std;

int t, n, ans, a, tmp;
int main() {
  scanf("%d", &t);
  while(t--) {
    vector<int> r, b, *vp;
	scanf("%d", &n);
    
    while(n--) {
      scanf("%d", &a);
      if (a < 0) r.push_back(-a);
      else b.push_back(a);
    }
    
    r.push_back(0), b.push_back(0);
    
    sort(r.begin(), r.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    
    vp = &((*b.begin() > *r.begin()) ? b : r);
    tmp = *vp->begin();
    ans = 0;
    
    while (tmp) {
      ++ans;
      vp = &((vp == &b) ? r : b);
      for (auto i : *vp)
        if (i < tmp) {
          tmp = i;
          break;
        }
    }
    
    printf("%d\n", ans);
  }
  return 0;
}
