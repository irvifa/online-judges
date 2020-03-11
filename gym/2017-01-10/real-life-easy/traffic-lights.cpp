#include<bits/stdc++.h>
using namespace std;

const int N = 105;

int n, i, time_min;
int light[N];

bool check(int t) {
    for(i = 1; i <= n; i++) {
        int m = t / light[i];
        if (m % 2) return false;
        m = t % light[i];
        if (m >= light[i] - 5) return false;
    }
    return true;
}

int solve() {
    int t = time_min << 1, g = time_min - 5;
    while (t <= 18000) {
        for (i = 0; i <= g; i++)
            if (t + i > 18000) return -1;
            else if (check(t + i)) return t + i;
        t += time_min << 1;
    }
    return -1;
}

int h, m, s, res;
main() {
	while (scanf("%d", &light[1])!=EOF) {
        if (!light[1]) break;
        n = 1;
        time_min = light[1];
        while (light[n]) {
            scanf("%d", &light[++n]);
            if (light[n]) time_min = min(time_min, light[n]);
        }
        n--;
        res = solve();
        if (res < 0) puts("Signals fail to synchronise in 5 hours");
        else {
            h = res / 3600;
            m = (res - h * 3600) / 60;
            s = res - h * 3600 - m * 60;
            
            if (h < 10) printf("0");
            printf("%d:", h);
            if (m < 10) printf("0");
            printf("%d:", m);
            if (s < 10) printf("0");
            printf("%d\n", s);
        }
    }
    scanf("%d %d", &light[2], &light[3]);
	return 0;
}
