#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int v[MAX]; 
int n, lt, gt, az;
int i, j;

int main() {
	scanf("%d",&n);
	lt=0, gt=0, az=0;
	for (i = 0; i < n; i++)
		scanf("%d",&v[i]);
	
	for (int i = 0; i < n-1; i++) {
		if (v[i + 1] < v[i]) {
			for (j = 0; j < i + 1; j++)
				if (v[i + 1] < v[j])
					lt++;
	
			if (lt == i + 1) az++;
		}
		else if (v[i + 1] > v[i]) {
			for (j = 0; j < i + 1; j++) {
				if (v[i + 1] > v[j])
					gt++;
			}
			if (gt == i + 1) az++;
		}
		
		lt=0; gt=0;
	}
	printf("%d\n",az);
    return 0;
}
