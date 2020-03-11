#include<bits/stdc++.h>
using namespace std;

const int SIZE = 505;
int mPriority[SIZE][SIZE], wPriority[SIZE][SIZE], mPref[SIZE][SIZE], wPref[SIZE][SIZE], nextPriority[SIZE], current [SIZE];
queue<int> q;

void stable() {
	//cout << "asem2 jawa" << endl;
	while(!q.empty()){
		int m, w;
		m = q.front();
		w = mPref[m][nextPriority[m]++];
		if(current[w] == -1){
			current[w] = m;
			q.pop();
		} else if(wPriority[w][m] < wPriority[w][current[w]]){
			q.push(current[w]);
			current[w] = m;
			q.pop();
		}
	}
}

int t, n, w, m, i, j;	
int main() {
	
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(i=1; i<=n; i++){
			scanf("%d", &w);
			current[w] = -1;
			for(j=1; j<=n; j++){
				scanf("%d", &wPref[w][j]);
				wPriority[w][wPref[w][j]] = j;
			}
		}

		for(i=1; i<=n; i++){
			scanf("%d", &m);
			q.push(m);
			nextPriority[m] = 1;
			for(j=1; j<=n; j++){
				scanf("%d", &mPref[m][j]);
				mPriority[m][mPref[m][j]] = j;
			}
		}
		
		stable();
		for(i=1;i<=n;i++)
			printf("%d %d\n", current[i], i);
	}
    return 0;
}
