#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;

int n, i, m, j;
bool flag;
int main() {
    cin >> n;
    j = 0;
    while(n--) {
        cin >> m;
        printf("Case #%d: %d = ", ++j, m);
        flag = 0;
        for (i = 2; i < m; ++i) {
            if (m % i == 0) {
                if (!flag){
                    printf("%d * %d = ", i, m/i);
                    // cout << i << " * " << num / i << " = ";
                    flag = 1;
                }
                else break;
            }
           
        }
        printf("%d * %d\n", i, m/i);
        // cout << i << " * " << num / i << '\n'; 
    } 
    return 0;
}
