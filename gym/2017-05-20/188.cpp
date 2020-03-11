#include <bits/stdc++.h>
using namespace std;

int w[30], n, C;

int check() {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if((C/w[i])%n == (C/w[j])%n) {
                C = min((C/w[i]+1)*w[i], (C/w[j]+1)*w[j]);
                return 0;
            }
        }
    }
    return 1;
}

char s[100], tmp[100];
int i, j, sublen,len;
int main() {
    while(gets(s)) {
        len = strlen(s);
        n = 0;
        for(i = 0; i < len; i++) {
            if(isalpha(s[i])) {
                sscanf(s+i, "%s", tmp);
                sublen = strlen(tmp);
                w[n] = 0;
                for(j = 0; j < sublen; j++)
                    w[n] = (w[n]<<5) + (tmp[j]-'a'+1);
                i += sublen;
                n++;
            }
        }
        C = INT_MAX;
        for(i = 0; i < n; i++) {
            C = min(C, w[i]);
        }
        while(!check());
        printf("%s\n%d\n\n", s, C);
    }
    return 0;
}
