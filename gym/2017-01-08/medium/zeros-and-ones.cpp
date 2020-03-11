#include<bits/stdc++.h>
using namespace std;

int tc, n, i, j;
string s, ss;
int main() {  
    tc = 0;
    while (cin >> s) {
        scanf("%d", &n);
        printf("Case %d:\n", ++tc);
        while(n--) {
            scanf("%d %d", &i, &j);
            if (i > j) swap(i, j);
            
            ss = s.substr(i, j - i + 1);
            if (s.size() <= 1 || unique(ss.begin(), ss.end()) == ss.begin() + 1)
                puts("Yes");
            else
                puts("No");
        }
    }
    return 0;
}
