#include<bits/stdc++.h>
using namespace std;


int binser(vector <int> arr, int key) {
	int i = lower_bound(arr.begin(), arr.end(), key) - arr.begin();
	if (arr[i]==key)
    	return lower_bound(arr.begin(), arr.end(), key) - arr.begin();
    else 
    	return -1;
}

int N, Q, i, k;
int main(){
	cin >> N;
	vector <int> a;
	a.resize(N);
	for(i=0; i<N; i++) {
		cin >> a[i];
	}
	
	cin >> Q;
	for(i=0; i<Q; i++){
		cin >> k;
		//if(find(a.begin(), a.end(), k) == a.end())
		//	cout << "-1" << endl;
		//else {
			int ans = binser(a, k);
			cout << ans << endl;
		//}
	}
	return 0;
}
