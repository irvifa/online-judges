#include <bits/stdc++.h>
#include "gondola.h"
  
using namespace std;
typedef long long ll;

const int mod = 1e9 + 9;
  
int valid(int n, int inputSeq[]) {
    int ind, x;
    ind = -1, x = -1;
    for(int i = 0; i < n; i++) {
        if(inputSeq[i] <= n) {
            ind = i, x = inputSeq[i];
            break;
        }
    }
    for(int i = ind + 1; i < n; i++) {
        if(inputSeq[i] <= n and (x + i - ind - 1) % n + 1 != inputSeq[i])
            return 0;
    }
    set < int > s;
    for(int i = 0; i < n; i++) s.insert(inputSeq[i]);
    
return s.size() == n;
}
 
int replacement(int n, int gondolaSeq[], int replacementSeq[]) {
    int ind, i;
    ind  = 1;
    for(i = 0; i < n; i++) {
        if(gondolaSeq[i] <= n) {
            ind = (gondolaSeq[i] - 1 - i + n) % n + 1;
            break;
        }
    }
    vector < pair<int, int> > v;
    for(int i = 0; i < n; i++) {
        v.push_back(make_pair(gondolaSeq[i], (ind + i - 1) % n + 1));
    }
    sort(v.begin(), v.end());
    int nxt = n + 1, sz = 0;
    for(auto &it: v) {
        int x = it.first;
        int i = it.second;
        while(nxt <= x) 
            replacementSeq[sz++] = i, i = nxt, nxt++;
    }
    return sz;
}
 

int countReplacement(int n, int inputSeq[]) {
    int ans, mx, i;
    set < int > s;
    if(!valid(n, inputSeq)) return 0;
    ans = 1, mx = *max_element(inputSeq, inputSeq + n);
    
    for(i = 0; i < n; i++)
        if(inputSeq[i] > n)
            s.insert(inputSeq[i]);
    
    for(i = n + 1; i <= mx; i++) {
        if(s.count(i)) {
            s.erase(i);
            continue;
        }
        ans = (ll) ans * s.size() % mod;
    }
    return ans;
}



