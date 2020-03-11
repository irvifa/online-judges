#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int arr[MAX];
int n, ans, i, j, sum, take;
int main() {
	scanf("%d",&n);
	sum = 0;
	for(i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	
	sort(arr, arr+n);
	
	j = n -1;
	ans = 0;
	take = 0;
	while(take <= sum) {
		sum -= arr[j];
		take += arr[j];
		j--;
		ans++;
	}
	
	printf("%d",ans);
	
	return 0;
}
