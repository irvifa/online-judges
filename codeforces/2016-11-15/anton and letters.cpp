#include<bits/stdc++.h>
using namespace std;

char curr;
set<char> s;  
int main() {
  while (cin >> curr)
    if (isalpha(curr))
      s.insert(curr);
    
  cout << s.size() << endl;
  return 0;
}
