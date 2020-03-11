#include<bits/stdc++.h>
using namespace std;

int solve(int val) {
    int ret;
    ret = 0;
    while(val!=0) {
    	ret+=(val%10)*(val%10);
    	val/=10;
    }
    return ret;
}

int tc, t, n, tmp;
int main() {
	tc = 0;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        tmp = n;
        while(1) {
            tmp = solve(tmp);
            if(tmp == 1) {
                printf("Case #%d: %d is a Happy number.\n",++tc,n);
                break;
            } else if(tmp == 4) {
                printf("Case #%d: %d is an Unhappy number.\n",++tc,n);
                break;
            }
        }
    }
    return 0;
}
