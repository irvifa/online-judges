#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long int ll;
typedef pair<int,int> pii;

map< string, pii > timezones;

void normalize_time(int& h, int& m) {
  if (h < 0) h += 24;
  else if (h > 23) h -= 24;

  if (m < 0) m += 60, h -= 1;
  else if (m > 59) m -= 60, h += 1;

  if (h < 0) h += 24;
  else if (h > 23) h -= 24;
}

void to_utc(int& h, int& m, string& zone) {
  h -= timezones[zone].first;
  m -= timezones[zone].second;

  normalize_time(h, m);
}

void to_local(int& h, int& m, string& zone) {
  h += timezones[zone].first;
  m += timezones[zone].second;

  normalize_time(h, m);
}

void init() {
    timezones["UTC"] = make_pair(0, 0);
    timezones["GMT"] = make_pair(0, 0);
    timezones["BST"] = make_pair(1, 0);
    timezones["IST"] = make_pair(1, 0);
    timezones["WET"] = make_pair(0, 0);
    timezones["WEST"] = make_pair(1, 0);
    timezones["CET"] = make_pair(1, 0);
    timezones["CEST"] = make_pair(2, 0);
    timezones["EET"] = make_pair(2, 0);
    timezones["EEST"] = make_pair(3, 0);
    timezones["MSK"] = make_pair(3, 0);
    timezones["MSD"] = make_pair(4, 0);
    timezones["AST"] = make_pair(-4, 0);
    timezones["ADT"] = make_pair(-3, 0);
    timezones["NST"] = make_pair(-3, -30);
    timezones["NDT"] = make_pair(-2, -30);
    timezones["EST"] = make_pair(-5, 0);
    timezones["EDT"] = make_pair(-4, 0);
    timezones["CST"] = make_pair(-6, 0);
    timezones["CDT"] = make_pair(-5, 0);
    timezones["MST"] = make_pair(-7, 0);
    timezones["MDT"] = make_pair(-6, 0);
    timezones["PST"] = make_pair(-8, 0);
    timezones["PDT"] = make_pair(-7, 0);
    timezones["HST"] = make_pair(-10, 0);
    timezones["AKST"] = make_pair(-9, 0);
    timezones["AKDT"] = make_pair(-8, 0);
    timezones["AEST"] = make_pair(10, 0);
    timezones["AEDT"] = make_pair(11, 0);
    timezones["ACST"] = make_pair(9, 30);
    timezones["ACDT"] = make_pair(10, 30);
    timezones["AWST"] = make_pair(8, 0);
}

int n, h, m;
char separator;
string curr, tn, zone1, zone2;
int main() {
  init();
  cin >> n;
  while (n--) {
    cin >> curr;

    if (curr != "noon" && curr != "midnight") {
        cin >> tn;
        cin >> zone1 >> zone2;

        if (curr == "noon") {
            h = 12, m = 0;
        } else if (curr == "midnight") {
            h = m = 0;
        } else {
            istringstream ct(curr);
            ct >> h;
            ct >> separator;
            ct >> m;

            if (tn[0] == 'p' && h < 12) {
                h += 12;
                if (h == 24) h = 0;
            } else if (tn[0] == 'a' && h == 12) {
                 h = 0;
            }
        }

        to_utc(h, m, zone1);
        to_local(h, m, zone2);

        if (h == 0 && m == 0) {
            puts("midnight");
        } else if (h == 12 && m == 0) {
            puts("noon");
        } else {
            if (h == 0) {
                cout << "12:" << (m > 9 ? "" : "0") << m << " a.m." << endl;
            } else if (h == 12) {
                cout << "12:" << (m > 9 ? "" : "0") << m << " p.m." << endl;
            } else if (h > 12) {
                cout << h - 12 << ":" << (m > 9 ? "" : "0") << m << " p.m." << endl;
            } else {
                cout << h << ":" << (m > 9 ? "" : "0") << m << " a.m." << endl;
            }
        }
      }
    }
  return 0;
}