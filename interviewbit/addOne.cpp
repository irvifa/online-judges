#include<bits/stdc++.h>
using namespace std;

vector<int> addOne(vector<int> A){
	int i, size, carry, num;
	vector< pair<int,int> > tmp;
	vector<int> v;
	size = A.size();
	carry = 0;
	
	A[size-1]++;
	
	for(i=size-1; i>=0; i--) {
		num = A[i]+carry;
		if(num>=10) 
			carry = 1;
		else 
			carry = 0;
	
		tmp.push_back(make_pair(i,num%10));
	}
	
	i--;
	
	if(carry==1) 
		tmp.push_back(make_pair(i,carry));
	
	sort(tmp.begin(),tmp.end());
	
	i=0, size= tmp.size();
	while(tmp[i].second==0) i++;
	
	for(; i<size; i++)
		v.push_back(tmp[i].second);
	
	return v;
}

int i;
int main() {
	vector<int> a;
	vector< int > b;
	
	//a.push_back(0);
	//a.push_back(0);
	for(i=1; i<=5; i++)
		a.push_back(0);
	
	/**for(i=0; i<3; i++)
		cout << a[i] << endl;
	
	cout << endl;
	*/
	b = addOne(a);
	for(i=0; i<b.size(); i++)
		cout << b[i];
	cout << endl;
	//cout << b.size() << endl;
	return 0;
}
