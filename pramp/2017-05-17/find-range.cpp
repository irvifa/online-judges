#include <bits/stdc++.h>

using namespace std;
const int N = 2;
vector<int> meetingPlanner(vector<vector<int>> &slotsA, vector<vector<int>> &slotsB, int n) {
  // your code goes here
  vector<int> ret;
  int i, j = 0;
  //O(M+N)
  while(i < slotsA.size() && j < slotsB.size()){
     int st = max(slotsA[i][0],slotsB[j][0]);
     int fin = min(slotsA[i][1],slotsB[j][1]);
     if(st + n <= fin) {
         ret.push_back(st);
         ret.push_back(st+n);
         return ret;
     } else if (slotsA[i][0] < slotsB[j][0]){
       i++;
     } else {
       j++;
     }
  }
  return ret;
}

int main() {
  vector<vector<int> >a = {{10, 50}, {60, 120},{140, 210}};
  vector<vector<int> > b = {{0,15},{60,70}};
  int dur = 8;
  vector<int> ans = meetingPlanner(a, b, 8);
  if(ans.size() == 0) puts("null");
  else {
    for(int i = 0; i < ans.size(); i++)
      cout << ans[i] << " ";
    cout << endl;
  }
  return 0;
}
              