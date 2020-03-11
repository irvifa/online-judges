#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll t, n, i, j, sum, maximum, tmp;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        ll an = 2*n;
        ll a[an][an];
         
        for(i=0;i<an;i++)
            for(j=0;j<an;j++) cin>>a[i][j]; 
         
        maximum=-1;
        sum = 0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                tmp = a[i][j];
                tmp = max(tmp,max(a[an-i-1][j],a[i][an-j-1]));
                tmp =  max(tmp,a[an-i-1][an-j-1]);
                sum += tmp;
            }
        }
        cout<<sum<<endl;
    }
}
