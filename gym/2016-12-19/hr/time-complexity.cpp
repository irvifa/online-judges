#include <bits/stdc++.h>
using namespace std;

bool prime(int x) {
	int i;
	for (i=2 ; i*i<=x ; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int n, a;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d",&n);
    while(n--) {
        scanf("%d", &a);
        if(prime(a)&&a!=1) puts("Prime");
        else puts("Not prime");
    }
    return 0;
}

