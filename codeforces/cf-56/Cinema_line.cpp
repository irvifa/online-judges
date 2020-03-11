#include <bits/stdc++.h>
using namespace std;

int i,n,coin25,coin50,coin100,a;
bool flag;
int main() {
    while(cin>>n) {
        flag=true;
        coin25=coin50=coin100=0;
        for(i=0;i<n;i++) {
            scanf("%d",&a);

            if(a==25) coin25++;
            if(a==50 && coin25) coin25--,coin50++;
            else if(a==50) flag=false;
            if(a==100 && coin25 && coin50) coin25--,coin50--,coin100++;
            else if(a==100 && coin25>=3) coin25-=3,coin100++;
            else if(a==100) flag=false;
        }
        printf("%s\n",(flag)?"YES":"NO");
    }
    return 0;
}
