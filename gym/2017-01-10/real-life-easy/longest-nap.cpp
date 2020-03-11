#include<bits/stdc++.h>
using namespace std;

const int N = 8*60+2;
bool av[N];
int bt, et, start, length;
int tc, n, a, b, c, d, i, j;
string s;
int main() {
	tc = 0;
	while(~scanf("%d", &n)) {
		memset(av,true,sizeof(av));
		while(n--) {
			scanf("%d:%d %d:%d", &a, &b, &c, &d);
			getline(cin,s);
			//cout << "asem asem jawa" << endl;
			bt = (a - 10) * 60 + b;
        	et = (c - 10) * 60 + d;
            
        	for(i = bt; i < et; ++i)
				av[i] = false;
		}
		
		start = 0, length = 0;
		for (i = 0; i <= N; ++i) {
            if (av[i]) {
               	j = i + 1;
                
                while(av[j]) ++j;
                
                if(j == N) --j;
                    
                if (j - i > length) {
                    start = i;
                    length = j - i;
                }               
                i = j;
            }
        }
        
        if (length >= 60)
            printf("Day #%d: the longest nap starts at %d:%02d and will last for %d hours and %d minutes.\n", ++tc, start / 60 + 10, start % 60, length / 60, length % 60);
        else
            printf("Day #%d: the longest nap starts at %d:%02d and will last for %d minutes.\n", ++tc, start / 60 + 10, start % 60, length);
	}
	return 0;
}
