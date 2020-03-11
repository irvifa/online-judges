#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

const int N = 30;
const int M = 1000000;

int n, tc, coefs[N], d, k;
int seq[M];
 
int pre() {
    int sum, i;
	sum = 0;
    seq[0] = sum;
    for(i = 0;; i++) {
        sum = sum + i;
        if(sum >= M) break;
        seq[sum] = i + 1;
    }
}
 
ull eval(int n, int i) {
    if(i == tc) return 0;
    return coefs[i] * pow(n, i) + eval(n, i + 1);
}

int i, tmp;
int main() {
    pre();
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &tc); 
        tc++;
        for(i = 0; i < tc; i++)
            scanf("%d", &coefs[i]);
        scanf("%d\n%d", &d, &k);
        tmp = (k - 1) / d;
        while(tmp > 0 && seq[tmp] == 0) tmp--;
        printf("%llu\n", eval(seq[tmp], 0));
    }
}
