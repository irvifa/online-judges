#include <bits/stdc++.h>
using namespace std;

void next_move(int posr, int posc, vector <string> board) {
    if(board.at(posr).at(posc) == 'd') {
        cout<<"CLEAN";
    } else {
        int shortest, curr , ti, tj;
        shortest = 100;
        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++)
                if(board.at(i).at(j) == 'd') {
                    curr = sqrt(pow(posr-i,2)+pow(posc-j,2));
                    if(curr<shortest) {
                        shortest = curr;
                        ti = i;
                        tj = j;
                    }
                }
        if(posr-ti<0)
            cout<<"DOWN";
        else if(posr-ti>0)
            cout<<"UP";
        else if(posc-tj>0)
            cout<<"LEFT";
        else
            cout<<"RIGHT";
    }
}
int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
