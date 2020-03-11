#include <bits/stdc++.h>
using namespace std;

class Heap {
	private:
		double me; //Stores current median
		priority_queue<int> ma; //Max heap for lower values
		priority_queue<int, vector<int>, greater<int> > mi; //Min heap for greater values
	
	public:
		void balance() {
			if(abs(ma.size() - mi.size()) > 1) {
				if(ma.size() > mi.size()) {
					mi.push(ma.top());
					ma.pop();
				} else {
					ma.push(mi.top());
					mi.pop();
				}
			}
		}
	
		void insert(int &x) {
			if (ma.empty()) ma.push(x);
			else if (x > ma.top())
				mi.push(x);
			else if(mi.empty()) {
				mi.push(ma.top());
				ma.pop();
				ma.push(x);
			}
			else ma.push(x);
			balance();
		}
	
		double find_median() {
			if ((ma.size() + mi.size()) % 2 == 0) {
				me = (ma.top() + mi.top());
				me /= 2;
			} else {
				if (mi.empty()) me = ma.top();
				else if (mi.size() < ma.size()) me = ma.top();
				else me = mi.top();
			}
			return me;
		}
};

int n, a;
Heap afs;
int main(){
    cin >> n;
    while(n--){
		cin >> a;
		afs.insert(a);
		cout.precision(1);
		cout << fixed << afs.find_median() << endl;
    }
    return 0;
}

