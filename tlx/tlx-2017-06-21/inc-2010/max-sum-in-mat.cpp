#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int nyan[N][N],sum[N][N], nyan2[N][N][N];
int n, m, k, t;

int zz(int nn, int mm,int kk) {
  if (nn >= n) return 0;
  if ( kk == 0 ) return sum[nn][mm];
  if (nyan2[nn][mm][kk] == -1) {
    int res = -1;
    for (int i = 0 ; i < m;i++) res = max(res, nyan[nn][i] + zz(nn+1,i, kk - (mm!=i)));
    nyan2[nn][mm][kk] = res;
  }
  return nyan2[nn][mm][kk];
}

int i, j, afs;
int main() {
  cin >> t;
  while (t--) {
    cin >> n >> m >> k;
    memset(nyan2,-1,sizeof(nyan2));
    for(i = 0 ; i< n;i++)
      for(j = 0;j<m;j++)
        cin >> nyan[i][j];

    for(i = n-1; i >= 0; i--)
      for(j = 0 ;j<m;j++)
        if(i==n-1) sum[i][j] = nyan[i][j];
        else sum[i][j] = sum[i+1][j] + nyan[i][j];
    afs = -1;
    for(i = 0 ;i<m;i++) afs = max(afs,zz(0,i,k));
    cout << afs << endl;
  }
  return 0;
}