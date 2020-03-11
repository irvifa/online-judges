#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
int a[MAXN];
int n, i;
int main() {
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    if(a[n]==0) cout << "UP" << endl;
    else if(a[n]==15) cout << "DOWN" << endl;
    else if(n==1) cout << "-1" << endl;
    else if(a[n-1]<a[n])cout << "UP" << endl;
    else if(a[n-1]>a[n]) cout << "DOWN" << endl;
}
