#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;

int b, c, d, e, a, f, s;
bool afs;
int main() {
    while(scanf("%d %d %d %d",&b,&c,&d,&e)!=EOF) {
        afs = 0;
        for ( a = 0; a < (1 << 16) && !afs; a++ ) {
            f = pow(a,2) - e;
            s = b - pow(a,2) - pow(f,2);
            if(pow(a + f, c) + f == d ) {
                cout << a << " " << f << " " << s << endl;
                afs = 1;
            }
        }
        if (!afs) puts( "No solution" );        
    }
    return 0;
}