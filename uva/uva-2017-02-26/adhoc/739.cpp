#include<bits/stdc++.h>
using namespace std;

char c[27] = "01230120022455012623010202";
char s[25];
int i, len, t, last, tmp;
int main() {
    printf("         NAME                     SOUNDEX CODE\n");
    while(gets(s)) {
        printf("         %-25s%c", s, s[0]);
        len = strlen(s), t = 0, last = c[s[0]-'A'];
        for(i = 1; i < len && t < 3; i++) {
            if((tmp = c[s[i]-'A']) != last && tmp != '0') {
                printf("%c", tmp), t++;
            }
			last = tmp;
		}
        while(t < 3) printf("0"), t++;
        puts("");
    }
    puts("                   END OF OUTPUT");
    return 0;
}
