#include<bits/stdc++.h>
using namespace std;

const int N = 1000010;

int solve(int length, int count) {	    
    int i;
    if (length == 1) return count + 1;
    
    for (i = 0; length; length /= 10, ++i);
        
    return solve(i, count + 1);
}


char input[N];
int main() {
    while (scanf("%s", input), input[0] != 'E') {
        if (strlen(input) == 1 && input[0] == '1')
            puts("1");
        else
            printf("%d\n", solve(strlen(input), 1));
    }
}
