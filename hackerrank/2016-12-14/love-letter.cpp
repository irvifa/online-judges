#include <bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/challenges/the-love-letter-mystery 
 
int solve(string &str){
    int changes, mid, len, i, diff;
    changes = 0;
    mid = str.length()/2;
    len = str.length();
     
    for (i=0; i < mid; i++){
        diff = abs(int(str.at(i)) - int(str.at(len-i-1)));
        changes += diff;
    }
     
    return changes;
}

int main() {
    string str;
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        cin>>str;
        printf("%d\n", solve(str));
     } 
  return 0;
}
