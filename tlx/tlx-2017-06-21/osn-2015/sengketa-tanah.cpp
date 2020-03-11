#include <bits/stdc++.h>
using namespace std;

bool collide(int x_1, int y_1, int width_1, int height_1, int x_2, int y_2, int width_2, int height_2) {
  return !(x_1 >= x_2+width_2 || x_1+width_1 <= x_2 || y_1 >= y_2+height_2 || y_1+height_1 <= y_2);
}

int x11, y11, x12, y12;
int x21, y21, x22, y22;
bool flag;
int n;
string s;
int main() {
    cin >> s;
    cin >> x11 >> y11 >> x12 >> y12;
    cin >>  x21 >> y21 >> x22 >> y22;
    flag = collide(abs(x11),abs(y11),abs(x12-x11),abs(y12-y11),abs(x21),abs(y21),abs(x22-x21),abs(y22-y21));
    if(flag) puts("SENGKETA");
    else puts("DAMAI");
        
    return 0;
}
