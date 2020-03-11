#include <bits/stdc++.h>
using namespace std;


int digits_sum (int n) {
  int result = 0;
  while (n) {
    result += n % 10;
    n /= 10;
  }
  return result;
}

int n, i, sum;  
string input, tmp;
int main() {
  cin >> n;
  while (n--) {
    input = "";
    for (i = 0; i < 4; i++) {
      cin >> tmp;
      input += tmp;
    }

    sum = 0;

    for (i = 0; i < input.size(); i++) {
      if (i % 2 == 0) {
        sum += digits_sum((input[i]-'0')*2);
      } else {
        sum += input[i] - '0';
      }
    }

    if (sum % 10 == 0) {
      puts("Valid");
    } else {
      puts("Invalid");
    }
  }

  return 0;
}