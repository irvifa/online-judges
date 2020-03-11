#include<bits/stdc++.h>
using namespace std;

const int N = 26;
bool np[N], g[N];
int t, i, d, w;
int main(){
    string a, f;
    while (scanf("%d", &t), t!=-1) {
        memset(np, false, sizeof(np));
        memset(g, false, sizeof(g));
        d = w = 0;
        
        cin >> a >> f;
        
        for (auto c: a) {
            if (!np[c - 'a']) {
                np[c - 'a'] = true;
                ++d;
            }
        }
        
        for (i = 0; i < f.size() && w < 7 && d; i++) {
            if (np[f[i] - 'a']) {
                np[f[i] - 'a'] = false;
                
                g[f[i] - 'a'] = true;
                --d;
            } else if (!g[f[i] - 'a']) {
                g[f[i] - 'a'] = true;
                ++w;
            }
        }
        
        printf("Round %d\n", t);
        
        if (!d)
            puts("You win.");
        else if (w == 7)
            puts("You lose.");
        else
            puts("You chickened out.");
    }
}
