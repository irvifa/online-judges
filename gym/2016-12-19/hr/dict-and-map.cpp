#include <bits/stdc++.h>
using namespace std;

map<string, string> m;
string k, v, s;
int n;
int main() {
    cin >> n;
    while(n--) {
        cin >> k >> v;
        m.insert(make_pair(k,v));
    }
    while(cin>>s) {
        if(m.find(s)==m.end()) puts("Not found");
        else cout << s << "=" << m.at(s) << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

