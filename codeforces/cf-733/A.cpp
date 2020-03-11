#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
  int ans, curr, len, i;
  ans = -1, curr=1;
  len = s.size();
  for (i = 0; i < len; ++i){
    if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' 
    	|| s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
      ans = max(curr,ans);
      curr = 1;
    } else {
      curr++;
    }
  }
  return max(curr,ans);
}

string s;
int ans;
int main(){
  cin >> s;
  ans = solve(s);
  printf("%d\n",ans);
  return 0;
}
