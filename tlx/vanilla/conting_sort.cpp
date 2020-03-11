#include <bits/stdc++.h>
using namespace std;
const int MIN = -2147483647;
const int MAX = 2147483647;
const int SIZE = 1000000;



void csort(int array[], const int end, const int max, const int min)
{
  int i;
  const int range = max-min+1;
  int count[range+1],
      scratch[end];

  for(i=0; i<range+1; i++)
    count[i] = 0;

  /* Set the value of count[i] to the number of
   * elements in array with value i+min-1. */
  for(i=0; i<end; i++) {
    int c = array[i]+1-min;
    count[c]++;
  }

  /* Update count[i] to be the number of
   * elements with value less than i+min. */
  for(i=1; i<range; i++)
    count[i] += count[i-1];

  /* Copy the elements of array into scratch in
   * stable sorted order. */
  for(i=(end-1); i>=0; i--) {
    int c = array[i]-min;
    int s = count[c];
    scratch[s] = array[i];
    /* Increment count so that the next element
     * with the same value as the current element
     * is placed into its own position in scratch. */
    count[c]++;
  }

  for(i=0; i<end; i++)
    array[i] = scratch[i];
}

int N, tmp, maxi, mini;
int v[SIZE];
int main() {
	scanf("%d",&N);
	maxi = MIN; mini = MAX;
	cout << N;
	for(int i=0; i<N; i++) {
		scanf("%d",&tmp);
		cout << tmp << endl;
		if(tmp>maxi) maxi = tmp;
		else if(tmp<mini) mini = tmp; 
		v[i] = tmp;
	}
	cout << mini << endl;
	cout << maxi << endl;
	csort(v,N+1,mini,maxi);
	for(int i =0; i<N; i++)
		printf("%d\n",v[i]);

	return 0;
}