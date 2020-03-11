#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

const int N = 2;
class Solution {
  public:
    vi meetingPlanner(vector<vi> &slotsA, vector<vi> &slotsB, int n) {
      // your code goes here
      vi ret;
      int i, j;
      i = j = 0;
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
};

int main() {
  vector<vi> a = {{10, 50}, {60, 120},{140, 210}};
  vector<vi> b = {{0,15},{60,70}};
  int dur = 8;
  Solution afs;
  vector<int> ans = afs.meetingPlanner(a, b, dur);
  if(ans.size() == 0) puts("null");
  else {
    for(int i = 0; i < ans.size(); i++)
      cout << ans[i] << " ";
    cout << endl;
  }
  return 0;
}
              