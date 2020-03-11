#include <bits/stdc++.h>
using namespace std;

int n, test, ans, x, cnt, sum;
int main() {
    test = 0;
    while(scanf("%d", &n) == 1 && n) {
        printf("Output for data set %d, %d bytes:\n", ++test, n);
        sum = 0, cnt = 0, ans = 0;
        while(scanf("%d", &x) == 1) {
            sum += x;
            n -= x;
            cnt++;
            if(cnt == 5) {
                printf("   Time remaining: ");
                if(sum == 0)
                    puts("stalled");
                else {
                    int tmp = n*5;
                    printf("%d seconds\n", tmp/sum + (tmp%sum != 0));
                }
                sum = 0;
                cnt = 0;
            }
            ans++;
            if(n == 0)
                break;
        }
        printf("Total time: %d seconds\n\n", ans);
    }
    return 0;
}