#include <bits/stdc++.h>
using namespace std;
const int MAX = 101;

bool cmp(string a,string b) {
    return a.size()<b.size();
}

int n,k;
string s[MAX];
string accepted;
int i, cnt1, cnt2, bc, wc;
int main() {
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        cin>>s[i];
    cin>>accepted;

    sort(s,s+n,cmp);
    cnt1 = 0 ,cnt2 = 0;
    for(int i=0;i<n;i++) {
        if(s[i].size()<accepted.size())cnt1++;
        if(s[i].size()<=accepted.size()&&accepted!=s[i])cnt2++;
    }
    bc = 1+cnt1/k*5+cnt1;
    wc = 1+cnt2/k*5+cnt2;
    printf("%d %d\n",bc,wc);
    return 0;
}