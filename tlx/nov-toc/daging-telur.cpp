#include <bits/stdc++.h>
using namespace std;

int n, d, t, a, f, i;
string s;
int main() {
    cin >> n;
    i = 0;
    while(n--) {
        if(a > f) {
            cout << ++i << " GENOS" << endl;
            
            fflush(stdout);  
            cin >> s;
            if(s == "SAITAMA") d++;
            else f++, t++;
          
        } else {
            cout << ++i << " SAITAMA" << endl;
            fflush(stdout);
            
            cin >> s;
            if(s == "SAITAMA") a++, d++;
            else t++;
        }
    }
    cout << d << " " << t;
    fflush(stdout);
}