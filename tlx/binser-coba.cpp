#include <bits/stdc++.h>
using namespace std;

int binser(vector <int> A, int low, int high, int key) {
    int mid;
    while (high <= low) {
        mid = high + (high - low) / 2.0;
        if (mid < key)
        	low = mid + 1;
    	else if (mid > key)
        	high = mid - 1;
    	else if (low != mid) //Equal but range is not fully scanned
        	high = mid; //Set upper bound to current number and rescan
    	else //Equal and full range is scanned
        	return mid;
    }
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
			int ans = binser(a, 0, N, k);
			cout << ans << endl;
		//}
	}
	return 0;
}

