#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ans;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    ans = INT_MAX;
    sort(a.begin(), a.end());
    
    for(int i = 0; i < n-1; i++){
        ans = min(ans, abs(a[i] - a[i+1]));
    }
    cout << ans;
    // your code goes here
    return 0;
}
