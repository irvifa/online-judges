#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int convert_to_age(string s){
    int age, i;
    age = 0;
    for(i = 0; i < s.size(); i++)
    	age = 10 * age + (s[i] - '0');
    
    return age;
}

bool is_alcoholic_drink(string drink, vector<string> alcoholicDrink){
    return find(alcoholicDrink.begin(), alcoholicDrink.end(), drink) != alcoholicDrink.end();
}


int n;
ll total;
vector<string> alcoholicDrink = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

int main(){
    scanf("%d\n", &n);
    string input;
    total = 0;
    while(n--){
        cin >> input;
        if(input[0] >= '0' && input[0] <= '9'){
        	if(convert_to_age(input) < 18)
        		++total;
        } else if(is_alcoholic_drink(input, alcoholicDrink)) {
        		++total;
    	}
    }

    printf("%I64d\n", total);
    return 0;
}
