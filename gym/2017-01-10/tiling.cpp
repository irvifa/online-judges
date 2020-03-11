#include<bits/stdc++.h>
using namespace std;

const int N = 251;

string add(string &a, string &b){
    string ret;
    int la, lb, i, c;
    la = a.size(), lb = b.size();
    
    for(i = 0,c = 0;i < la || i < lb || c > 0;++i){
        if(i < la) c += a[i] - '0';
        if(i < lb) c += b[i] - '0';
        ret += '0' + c % 10;
        c /= 10;
    }
    
    return ret;
}

string f[N];
int i, n;
void pre() {
	f[0] = f[1] = "1";
	
    for(i = 2;i < N;++i){
        f[i] = "0";
        f[i] = add(f[i],f[i - 1]);
        f[i] = add(f[i],f[i - 2]);
        f[i] = add(f[i],f[i - 2]);
    }
    
    for(i = 0; i < N; ++i)
        reverse(f[i].begin(),f[i].end());   
}

int main(){
	pre();
    while(scanf("%d",&n) == 1) {
        cout << f[n] << endl;
    }
    return 0;
}
