#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;

int n, e, f, c, afs, i;
int main() {
    cin >> n;
    while (n--) {
        scanf("%d %d %d", &e, &f, &c);
        e += f;
        afs = 0;
        while(e >= c) {
            afs += e/c;
            e = e%c + e/c;
        }
        printf("%d\n", afs);
    }
    return 0;
}