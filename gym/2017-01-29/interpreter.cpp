#include <bits/stdc++.h>
using namespace std;

const int RAM_SIZE = 1001;
const int REGS = 11;
int tc, pc, ans, inst;
vector<int> ram(RAM_SIZE);
vector<int> regs(REGS);    
int main() {
    cin >> tc;
    cin.ignore(100, '\n');
    cin.ignore(100, '\n');
    while (tc--) {
        ans = 0;
        fill(ram.begin(), ram.end(), 0);
        fill(regs.begin(), regs.end(), 0);
        pc = 0;
        while (cin.peek() != '\n' && !cin.eof()) {
            int inst;
            cin >> inst;
            cin.ignore(100, '\n');
            ram[pc++] = inst;
        }
        cin.ignore(100, '\n');
        pc = 0;
        while (1) {
            inst = ram[pc], ans++;
            if (inst == 100) break;
            int c = inst / 100;
            int d = inst % 100 / 10;
            int n = inst % 10;
            switch (c) {
            case 2:
                regs[d] = n;
                break;
            case 3:
                regs[d] = (regs[d] + n) % 1000;
                break;
            case 4:
                regs[d] = (regs[d] * n) % 1000;
                break;
            case 5:
                regs[d] = regs[n];
                break;
            case 6:
                regs[d] = (regs[d] + regs[n]) % 1000;
                break;
            case 7:
                regs[d] = (regs[d] * regs[n]) % 1000;
                break;
            case 8:
                regs[d] = ram[regs[n]];
                break;
            case 9:
                ram[regs[n]] = regs[d];
                break;
            case 0:
                if (regs[n] != 0) pc = regs[d] - 1;
                break;
            }
            pc++;
        }
        printf("%d\n",ans);
        if (tc > 0) {
            cout << endl;
        }
    }
    return 0;
}