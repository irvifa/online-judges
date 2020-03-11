#include "friend.h"
#include<bits/stdc++.h>
using namespace std;

const int N = 100000;

int d1[N], d2[N];
 
int findSample(int n,int c[],int h[],int p[]) {
    int i;
    for(i = 0; i < n ; i++) d1[i]=c[i];
    for(i = n-1; i > 0; i--) {
		if(p[i]==0) {
			d1[h[i]] += d2[i];
			d2[h[i]] += max(d1[i],d2[i]);
		} else if(p[i]==1) {
            d1[h[i]] = max(d2[h[i]]+d1[i],d1[h[i]]+std::max(d1[i],d2[i]));
            d2[h[i]] += d2[i];
		} else if(p[i] == 2) {
            d1[h[i]] = max(d2[h[i]]+d1[i],d1[h[i]]+d2[i]);
            d2[h[i]] += d2[i];
		}
	}
	return max(d1[0],d2[0]);
}
