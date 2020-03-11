#include<bits/stdc++.h>
using namespace std;

struct Time {
    Time(string info) {
        stringstream ss;
        ss << info;
        char temp;
        ss >> day >> temp;
        ss >> month >> temp;
        ss >> year;
    }
    int day, month, year;
};

string c, b;
int t, tc, d;
bool isPast;
int main() {
	tc = 0;
    scanf("%d", &t);
    while(t--) {   
        cin >> c >> b;
        
        Time current = c, birth = b;
        
        isPast = (current.month > birth.month || (current.month == birth.month && current.day >= birth.day));
        
        d = current.year - birth.year;
        if (!isPast) --d;
            
        printf("Case #%d: ", ++tc);
        
        if (d < 0) 
        	puts("Invalid birth date");
        else if (d > 130)
            puts("Check birth date");
        else
            printf("%d\n", d);
    }

}
