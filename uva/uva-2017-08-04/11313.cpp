#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int x, y, i, n;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &x, &y);
        if ((x - 1) % (y - 1) != 0) {
            puts("cannot do this");
        } else {
            printf("%d\n", (x - 1) / (y - 1));
        }
    }
    return 0;
}