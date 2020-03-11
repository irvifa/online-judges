#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

const ui FullDaySeconds = 86400;
const ui HalfDaySeconds = 43200;
const ui SecondsInMin = 60;
const ui SecondsInHour = 3600;
const ui HalfDayMin = HalfDaySeconds / SecondsInMin;

int k, n;
ui d, ns, h, m;
int main() {
    while (scanf("%d%d", &k, &n) == 2) {
       	d = k > n ? k - n : n - k;
        
        ns = (HalfDaySeconds * (FullDaySeconds - k) / d) % HalfDaySeconds + 30;
        h = ns / SecondsInHour % 12;
        m = ns / SecondsInMin % SecondsInMin;

        printf("%d %d %02d:%02d\n", k, n, h == 0 ? 12 : h, m);
    }
    return 0;
}
