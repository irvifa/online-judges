#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 26;
int mapping[N];
int T;
string num;
ll total;
int countOfSame, currentValue, previousValue;
bool increasing, decreasing, highCount;     
int main() {
    cin >> T;
    mapping['B' - 'A'] = 1;
    mapping['U' - 'A'] = 10;
    mapping['S' - 'A'] = 100;
    mapping['P' - 'A'] = 1000;
    mapping['F' - 'A'] = 10000;
    mapping['T' - 'A'] = 100000;
    mapping['M' - 'A'] = 1000000;
    
    while (T--) {
        cin >> num;
        total = 0;
        countOfSame = 0;
        previousValue = mapping[num[0] - 'A'];
        increasing = true, decreasing = true, highCount = false;
        
        for (auto e: num) {
            currentValue = mapping[e - 'A'];
            if (currentValue > previousValue) {
                decreasing = false;
                countOfSame = 1;
                previousValue = currentValue;
            } else if (currentValue < previousValue) {
                increasing = false;
                countOfSame = 1;
                previousValue = currentValue;
            } else {
                ++countOfSame;
                if (countOfSame == 10)
                {
                    highCount = true;
                    break;
                }
            }
            
            total += currentValue;
        }
        
        if ((increasing || decreasing) && !highCount)
            printf("%lld\n", total);
        else
            puts("error");
    }
	return 0;
}
