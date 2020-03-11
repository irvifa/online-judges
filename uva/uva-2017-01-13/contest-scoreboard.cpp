#include<bits/stdc++.h>
using namespace std;

const int N  = 101;
const int M = 10;

class Team {
public:
    int num, pro, time;
    Team() {};
    Team(int n, int p, int t) {
        num = n; pro = p; time = t;
    }
};

bool cmp(Team a, Team b) {
    if (a.pro>b.pro) return true;
    if (a.pro==b.pro) {
        if (a.time<b.time) return true;
        else if (a.time==b.time && a.num<b.num) return true;
    }
    return false;
}


int Count[N][M], Time[N];
bool is_exist[N];

void init() {
    int i, j;
    for (i = 1; i < N; i++) {
        Time[i] = 0;
        is_exist[i] = false;
        for (j = 1; j < M;  j++) Count[i][j] = 0;
    }
}

int n, num, pro, t, i, numpro, j;
char rs;
string s;
int main() {
    char rs;
    scanf("%d", &n);
    getline(cin, s);
    while (n--) {
        vector<Team> ans;
        init();
        while (cin >> num >> pro >> t >> rs) {
            is_exist[num] = true;
            if (Count[num][pro]==-1) continue;
            if (rs=='C') {
                Time[num] += Count[num][pro]*20 + t;
                Count[num][pro] = -1;
            }
            else if (rs=='I') Count[num][pro]++;
        }
        
        for (i = 1; i < N; i++) {
            if (is_exist[i]) {
                numpro = 0;
                for (j = 1; j < M; j++) if (Count[i][j]==-1) numpro++;
                ans.push_back(Team(i, numpro, Time[i]));
            }
        }
        
        sort(ans.begin(), ans.end(), cmp);
        
        for (i = 0; i < ans.size(); i++)
            printf("%d %d %d\n", ans[i].num, ans[i].pro, ans[i].time);
        
        if (n) puts("");
    }
}
