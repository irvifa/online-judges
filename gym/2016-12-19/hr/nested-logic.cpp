#include <bits/stdc++.h>
using namespace std;

int expected_dd, expected_mm, expected_yy;  
int actual_dd, actual_mm, actual_yy;  
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       
    cin >> actual_dd >> actual_mm >> actual_yy >> expected_dd >> expected_mm >> expected_yy;
    
    if ( actual_yy > expected_yy ) {
        puts("10000");
    } else if ( actual_yy == expected_yy ) {
        if ( actual_mm > expected_mm ) {
            printf("%d\n",((actual_mm - expected_mm) * 500));
        } else if ( actual_mm == expected_mm ) {
            if ( actual_dd > expected_dd ) {
                printf("%d\n",((actual_dd - expected_dd) * 15));
            } else {
                puts("0");
            }
        } else {
            puts("0");
        }
    } else {
        puts("0");
    }
    return 0;
}

