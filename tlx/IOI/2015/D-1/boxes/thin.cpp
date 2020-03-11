#include "boxes.h"
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll delivery(int N, int K, int L, int p[]) {   
    int i, j, mid;
    ll res, ans;
     
    mid = upper_bound(p,p+N,L/2)-p-1;
 
    for(i=mid ; i>=0 ; i-=K) ans += 2 * p[i];
    for(i = mid + 1; i < N ; i += K) ans += 2*(L - p[i]);
    for(i = 0; i < K ;i++) {
        res = L;
        for(j = mid -i -1; j >= 0; j -= K) res += 2*p[j];
        for(j = mid -i + K; j < N; j += K) res += 2*(L-p[j]);
        ans = min(ans, res);
    }
    return ans;
}