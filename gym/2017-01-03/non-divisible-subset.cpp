#include <bits/stdc++.h>
using namespace std;

int solve(const vector<int>& v, int k) {
    vector<int> rem(k, 0);
    int ans, i;
    for (const auto& num : v) {
        rem[num % k]++;
    }

    ans = (rem[0] != 0);
    if (k % 2 == 0)
        rem[k / 2] = rem[k / 2] ? 1 : 0;
    
    for (i = 1; i <= k / 2; i++)
        ans += max(rem[i], rem[k - i]);
    
    return ans;
}

int n, k, i, j;
vector<int> v;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d %d",&n,&k);
        v.resize(n);
    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);
   	
   	printf("%d\n",solve(v,k)); 
    return 0;
}
