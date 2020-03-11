#include<bits/stdc++.h>
using namespace std;

int t, x, y, n;
int i, j;    
bool flag;
int main() {
    scanf("%d", &t);
    while(t--) {
        scanf("%d:%d", &x, &y);
        int time = x*60 + y;
        char s[10];
        do {
            time++;
            if(time >= 1440)    time = 0;
            x = time/60, y = time%60;
            sprintf(s, "%02d%02d", x, y);
            sscanf(s, "%d", &n);
            sprintf(s, "%d", n);
            flag = true;
            for(i = 0, j = strlen(s)-1; i < j; i++, j--)
                if(s[i] != s[j])
                    flag = false;
            if(flag) {
                sprintf(s, "%02d:%02d", x, y);
                puts(s);
                break;
            }
        } while(true);
    }
    return 0;
}
