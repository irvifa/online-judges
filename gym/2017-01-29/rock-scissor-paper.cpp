#include <bits/stdc++.h>
using namespace std;

struct Play {
	double T;
	double W;
};


int N, K, i, j, p1, p2;
string m1, m2;
bool flag;
int main(){
	flag = false;
	while(scanf("%d", &N),N) {
		scanf("%d", &K);
		K = (K * N * (N - 1) )/ 2;
		Play P[N + 1];
		for(i = 0; i<= N; i++) {
			P[i].T = 0.0;
			P[i].W = 0.0;
		}
		while (K--) {
			cin >> p1 >> m1 >> p2 >> m2;
			if (m1 != m2) {
				P[p1].T += 1.0;
				P[p2].T += 1.0;
			   if ( (m1 == "paper" && m2 == "rock") || (m1 == "scissors" && m2 == "paper") || (m1 == "rock" && m2 == "scissors"))
					P[p1].W += 1.0;
				else
					P[p2].W += 1.0;
			}
		}
		if (flag) cout << endl;
		for(i = 1; i<=N; i++) {
			if (P[i].T > 0)
				printf("%.3lf\n", P[i].W / P[i].T);
			else
				printf("-\n");
		}
		flag = true; 
	}
	return 0;
}