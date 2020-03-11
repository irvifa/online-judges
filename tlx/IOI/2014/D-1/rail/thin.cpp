#include "rail.h"
#include<bits/stdc++.h>
using namespace std;
     
const int M = 10e6+10;
const int N = 5010;
int af[N], fs[N], loc[N], fi[M];
int CL, CR;

struct afs {
    int dis, num;
    bool operator<(const afs &p)const{
        return dis < p.dis;
    }
};

afs L[5010], R[5010];
     
     
void add(int p, int a, int b){
    loc[p] = a;
    fi[a] = b;
}
     
void nyan(int p, int a, int d){
    if(fi[loc[a]] == 1) add(p, loc[a] + d, 2);
    else add(p, loc[a] - d, 1);
}
     
void findLocation(int N, int first, int location[], int stype[]) {
    int i, MM, x, tmp, d, t, k, j;
    MM = M;
    add(0, first, 1);
    for(i = 1; i < N; i++){
        af[i] = getDistance(0, i);
    	if (MM > af[i]) MM = af[i], x = i;
    }
    nyan(x, 0, af[x]);
    for (i = 1; i < N; i++){
        if(i == x)continue;
    	fs[i] = getDistance(x, i);
    	if(af[i] == fs[i] + af[x]){
    		if(fs[i] < af[x]) nyan(i, x, fs[i]);
    		else L[CL].dis = fs[i], L[CL].num = i, CL++;
    	} else R[CR].dis = fs[i], R[CR].num = i, CR++;
    }
    sort(L, L + CL);
    sort(R, R + CR);
    tmp = 0;
    for(i = 0; i < CL; i++){
    	k = L[i].num;
    	t = loc[x] - fs[k];
    	d = getDistance(tmp, k);
    	if(d % 2 != (loc[tmp] - t) % 2 || fi[loc[tmp] + (d - (loc[tmp] - t)) / 2] == 1)nyan(k, tmp, d); 
    	else nyan(k, x, fs[k]), tmp = k;
    }
    tmp = x;
    for(i = 0; i < CR; i++){
    	k = R[i].num;
    	t = loc[0] + af[k];
    	d = getDistance(tmp, k);
    	if (d % 2 != (t - loc[tmp]) % 2 || fi[loc[tmp] - (d - (t - loc[tmp])) / 2] == 2)nyan(k, tmp, d);
    	else nyan(k, 0, af[k]), tmp = k;
    }
    for(i = 0; i < N; i++) location[i] = loc[i], stype[i] = fi[loc[i]];
}
