#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int maxn = 10e+5;

typedef struct {
    ll x1,y1,x2,y2;
} rectangle;

rectangle r[maxn];

ll num_of_squares(ll n, ll m) {
    if(n < m) swap(n,m);
    return (3 * n - m + 1) * m * (m + 1) / 6;
}

ll intersect(ll a, ll b, ll c, ll d){
    ll sum = 0;
    if (c >= a && c <= b) sum = min(b,d) - c;
    else if (a >= c && a <= d) sum = min(b,d) - a;
    sum -= 2;
    return sum;
}

ll crossed(int f, int s) {
    ll a = intersect(r[f].x1, r[f].x2, r[s].x1, r[s].x2);
    ll b = intersect(r[f].y1, r[f].y2, r[s].y1, r[s].y2);
    if (a>1) {
        if (r[f].y2 == r[s].y1) {
            return num_of_squares(a, r[s].y2 - r[f].y1) -
                   num_of_squares(a, r[s].y2 - r[s].y1) -
                   num_of_squares(a, r[f].y2 - r[f].y1);
        }
        else if (r[s].y2 == r[f].y1) {
            return num_of_squares(a, r[f].y2 - r[s].y1) -
                   num_of_squares(a, r[s].y2 - r[s].y1) -
                   num_of_squares(a, r[f].y2 - r[f].y1);
        }
    }
    else if (b>1) {
        if (r[f].x2 == r[s].x1) {
            return num_of_squares(b, r[s].x2 - r[f].x1) -
                   num_of_squares(b, r[s].x2 - r[s].x1) -
                   num_of_squares(b, r[f].x2 - r[f].x1);
        }
        else if (r[s].x2 == r[f].x1) {
            return num_of_squares(b, r[f].x2 - r[s].x1) -
                   num_of_squares(b, r[s].x2 - r[s].x1) -
                   num_of_squares(b, r[f].x2 - r[f].x1);
        }
    }
    return 0;
}


int n, i, j, t;
ll sum;
int main() {
    t = 0;
    
    while(scanf("%d",&n) && n){ 
        sum = 0;
        for(i = 0; i < n; i++) {
            scanf("%I64d %I64d %I64d %I64d",&r[i].x1,&r[i].y1,&r[i].x2,&r[i].y2);
            if (r[i].x1 > r[i].x2) swap(r[i].x1 , r[i].x2);
            if (r[i].y1 > r[i].y2) swap(r[i].y1 , r[i].y2);
            sum += num_of_squares(r[i].x2 - r[i].x1, r[i].y2 - r[i].y1);
        }
        
        for(i = 0; i < n; i++)
            for(j = i + 1; j < n; j++)
                sum += crossed(i, j);
        
        printf("Case %d: %I64d\n",++t,sum);
    }
    
    return 0;
}
