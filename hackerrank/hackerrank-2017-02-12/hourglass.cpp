#include<bits/stdc++.h>
using namespace std;

int ar[10][10],maxSum = INT_MIN;
int i, j, sum;
int main(){
    for(i = 0; i < 6; i++)
        for(j = 0; j < 6; j++) scanf("%d", &ar[i][j]);

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(j+2 < 6 && i+2 < 6 ){
                sum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
                if(sum > maxSum)maxSum = sum;
            }
        }
    }
    printf("%d\n", maxSum);
    return 0;
}
