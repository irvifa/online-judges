#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define eps 1e-10

const int maxn = 10e3+5;
double a[maxn];

pair<int, int> points[maxn];

int N, t, i, j, ans, k, c;
int main() {
	t = 1;
    while(scanf("%d",&N) && N) {
        for(i = 0;i < N;i++) {
            int f, s;
            scanf("%d %d",&f,&s);
            points[i] = make_pair(f,s);
        }
        
        ans = 0;
        
        for(i = 0; i < N; i++) {
            k = 0;
            for(j = i + 1; j < N; j++) {
                if(points[i].first == points[j].first)
                    a[k++] = INF;
                else
                    a[k++] = ( points[i].second - points[j].second) * 1.0 / (points[i].first - points[j].first);
            }
            
            sort(a,a + k);
            
            for(j = 0;j < k;j++) {
                c = 1;
                while(j < k - 1&& fabs(a[j] - a[j + 1]) < eps) {
                    j++;
                    c++;
                }
                ans = max(ans,c);
            }
        }
        
        ans++;
        if(ans < 4) ans = 0;
        printf("Photo %d: %d points eliminated\n",t++,ans);
    }
    
    return 0;
}
