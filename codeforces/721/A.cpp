#include <bits/stdc++.h>
using namespace std;

// one-dimensional japanese cross words
int n, i, j;
string s;
int main() {
    scanf("%d",&n);
    cin >> s;
    vector<int> ans;
    j = 0;
    for(i=0;i<s.size();i++) {
        if(s[i]=='B')j++;
        if(s[i]=='W') {
            if(j) ans.push_back(j);
            j=0;
        }
    }
    if(j)ans.push_back(j);
    cout<<ans.size()<<endl;
    for(i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}