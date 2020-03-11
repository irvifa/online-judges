#include<bits/stdc++.h>
using namespace std;

const int N = 30001;

int t, m, n, i, done, need;
int num[N];
int main() {
  scanf("%d", &t);
  while (t--) {
    vector<int> box;
    vector<int>::iterator it;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
      scanf("%d", &num[i]);
    
    done = 0, need = 0;
    while (n--) {
      scanf("%d", &i);
      while (box.size() < i) {
        it = lower_bound(box.begin(), box.end(), num[done]);
        box.insert(it, num[done++]);
      }
      printf("%d\n", box[need++]);
    }
    
    if(t) puts("");
  }
  return 0;
}
