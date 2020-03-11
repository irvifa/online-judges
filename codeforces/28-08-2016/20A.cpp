#include <bits/stdc++.h>
using namespace std;

string path, ans; 
int i, len;
bool flag;
int main(){
    cin >> path;
    len = path.size();
    flag = false;
    for(i = 0; i < len; i++){
        if(path[i] != '/' || flag == false) ans += path[i];
        if(path[i] == '/') flag = true;
        else flag = false;
    }

    if(flag && ans.size() > 1){ans = ans.substr(0, ans.size() - 1);}
    
    cout << ans << endl;

    return 0;
}
