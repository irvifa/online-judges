#include <bits/stdc++.h>
using namespace std;

vector<string> v;
set<string> s;
string buf, word;
int i, x;

int main(){
	while( getline( cin, buf ), buf != "0" ){
		word.clear();
		for( i = 0; i < buf.size(); ++i ){
			if( isalpha( buf[i] ) ){
				word.clear();
				word.push_back( buf[i] );
				while( ++i < buf.size() ){
					if( isalpha( buf[i] ) ){
						word.push_back( buf[i] );
					} else{
						--i;
						break;
					}
				}
				if( s.insert( word ).second ){
					v.push_back( word );
				} else{
					v.erase( find( v.begin(), v.end(), word ) );
					v.push_back( word );
				}
				cout << word;
			}
			else if( isdigit( buf[i] ) ){
				x = buf[i]-'0';
				while( ++i < buf.size() ){
					if( isdigit( buf[i] ) ){
						x *= 10;
						x += buf[i]-'0';
					} else{ --i;
						break;
					}
				}
				word = *(v.end()-x);
				v.erase( v.end()-x );
				v.push_back( word );
				cout << word;
			}
			else cout << buf[i];
		}
		cout << endl;
	}
}
