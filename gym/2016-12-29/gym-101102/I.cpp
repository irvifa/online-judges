#include<bits/stdc++.h>
using namespace std;
// http://codeforces.com/problemset/gymProblem/101102/I
const int MAXN = 2e5+10;
char s[MAXN];
int x[MAXN],y[MAXN],cntx,cnty;

int ans, ma, mi, curr, sum;
bool flag;

int T,r,c,i;
int main() {
    scanf("%d",&T);
    while(T--) {
        scanf("%d%d%s",&r,&c,s);
        int len = strlen(s);
        cntx = 0;
        cnty = 0;
        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));
        for(i = 0; i < len; i++){
            if(s[i] == '>') x[cntx++] = 1;
            else if(s[i] == '<') x[cntx++] = -1;
            else if(s[i] == '^') y[cnty++] = -1;
            else if(s[i] == 'v') y[cnty++] = 1;
        }
        
        sum = 0;
        flag = 0;
        ans = mi = ma = curr = 0;
        for(i = 0; i <cntx; i++){
            curr += x[i];
            if(flag){
                if(curr >= c){
                    ans++;
                    curr = c - 1;
                }
                else if(curr < 0){
                    ans++;
                    curr = 0;
                }
            }
            else{
                mi = min(mi,curr);
                ma = max(ma,curr);
                if(ma - mi >= c){
                    flag = 1;
                    ans++;
                    if(curr == mi){
                        curr = 0;
                    }
                    else{
                        curr = c - 1;
                    }
                }
            }
        }
        sum += ans;
        flag = 0;
        ans = mi = ma = curr = 0;
        for(i = 0; i <cnty; i++){
            curr += y[i];
            if(flag){
                if(curr >= r){
                    ans++;
                    curr = r - 1;
                }
                else if(curr < 0){
                    ans++;
                    curr = 0;
                }
            }
            else{
                mi = min(mi,curr);
                ma = max(ma,curr);
                if(ma - mi >= r){
                    flag = 1;
                    ans++;
                    if(curr == mi){
                        curr = 0;
                    }
                    else{
                        curr = r - 1;
                    }
                }
            }
        }
        sum += ans;
        printf("%d\n",sum);
    }
    return 0;
}
