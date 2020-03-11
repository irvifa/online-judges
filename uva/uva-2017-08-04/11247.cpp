#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;

ll afs, m, x;
bool flag;
int main() {
    while(scanf("%lld %lld", &m, &x) == 2 && m) {
        if(x == 100) {
            puts("Not found");
            continue;
        }
        afs = ceil((double)m/(1-x/100.0))+5;
        while(afs*(100-x) > (m-1)*100) afs--;
        if(afs <= m-1) puts("Not found");
        else printf("%lld\n", afs);
    }
    return 0;
}
