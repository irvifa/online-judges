#include<bits/stdc++.h>
using namespace std;

int a, f, s;
int main() {
	scanf("%d %d %d", &a, &f, &s);
	printf("%d\n",s/(a*f/(__gcd(a, f))));
}
