#include <bits/stdc++.h>
using namespace std;

int T, n, i, numRatings, winner, highest, lowest;
int main() {
    scanf("%d",&T);
    string endingSeperator = "";
    
    while (T--) {
        scanf("%d", &n);
        
        vector<string> names(n);
        vector<bool> eliminated(n, false);
        
        cin.ignore();
        
        for (i = 0; i < n; ++i)
            getline(cin, names[i]);
            
        string temp;
        getline(cin, temp);
        
        vector<vector<int> > ratings;
        
       
        while (temp != "") {
            stringstream ss;
            ss << temp;
            vector<int> order(n);
            
            for (i = 0; i < n; ++i) {
                ss >> order[i];
                --order[i];
            }
            
            ratings.push_back(order);
            
            if (cin.eof())
                break;
                
            getline(cin, temp);
        }
        
        numRatings = ratings.size();
        vector<int> posInRatings(numRatings, 0);
        
        winner = -1;
        
        vector<int> count(n, 0);
        
        for (i = 0; i < numRatings; ++i)
            ++count[ratings[i][0]];
        
        
        while (winner == -1) {
            for (i = 0; i < numRatings; ++i) {
                bool changed = false;
                while (eliminated[ratings[i][posInRatings[i]]]) {
                    ++posInRatings[i];
                    changed = true;
                }
                
                if (changed)
                    ++count[ratings[i][posInRatings[i]]];
            }
            
            highest = 0, lowest = 1000;
            
            for (i = 0; i < n; ++i) {
                if (eliminated[i])
                    continue;
                if (count[i] > highest)
                    highest = count[i];
              
                if (count[i] < lowest)
                    lowest = count[i];
            }

            if (highest == lowest || highest * 2 > numRatings) {
                winner = highest;
            } else {
                for (int i = 0; i < n; ++i)
                    if (count[i] == lowest)
                        eliminated[i] = true;
            }
        }
        
        cout << endingSeperator;
        endingSeperator = "\n";
        
        for (i = 0; i < n; ++i)
            if (count[i] == winner && !eliminated[i])            
                cout << names[i] << '\n';
    }

}