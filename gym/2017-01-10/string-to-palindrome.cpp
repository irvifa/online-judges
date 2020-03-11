#include<bits/stdc++.h>
using namespace std;

const int N = 1001;
string s;
int dp[N][N];

int solve(int lo, int hi) {
    if(dp[lo][hi]!=-1)return dp[lo][hi];
    if(lo == hi)return dp[lo][hi] = 0;
    if(lo + 1 == hi){
        if(s[lo] == s[hi])return dp[lo][hi]=0;
        return dp[lo][hi] = 1;
    }

    if(s[lo] != s[hi]){
        int x = min(1 + solve(lo + 1, hi), 1 + solve(lo, hi - 1));
        return dp[lo][hi] = min(x, 1 + solve(lo + 1, hi - 1));
    }
    return dp[lo][hi] = solve(lo + 1, hi - 1);
}

int n, tc, i, j;
int main() {
    tc = 0;
    scanf("%d",&n);
    while(n--) {
        cin>>s;
        for(i = 0; i < s.length(); i++)
        	for(j = 0; j < s.length(); j++)
            	dp[i][j] = -1;
        printf("Case %d: %d\n", ++tc, solve(0,s.length()-1));
    }
	return 0;
}
