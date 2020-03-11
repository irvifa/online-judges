#include <bits/stdc++.h>
using namespace std;

int tc, ans, north, west, curr;
string s;            
int main() {  
    while (scanf("%d",&tc), tc) {
        ans = 1, north = 2, west = 3;
        while ( tc--) {
            cin >> s;  
            curr = ans;
            if (s == "north") {
                ans = 7 - north;
                north = curr;
            } else if (s == "south") {
                ans = north;
                north = 7 - curr;
            } else if (s == "west") {
                ans = 7 - west;
                west = curr;
            } else if (s == "east") {
                ans = west;
                west = 7 - curr;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}