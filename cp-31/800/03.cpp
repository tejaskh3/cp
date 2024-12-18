// fit the empty cells in min ways
// either fill or replace empty with filled
// if i+1 is filled and i-1 is filled i will be filled automatically 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int numEmptyCells = 0;
        bool threeConsecutivePresent = false;
        for(int  i = 0; i < n; i++){
            if(s[i] == '.') {
                numEmptyCells++;
                if(i -1 >= 0 && i+1 < n && s[i-1] == '.' && s[i+1] == '.') threeConsecutivePresent = true;
            }
        }
        if(threeConsecutivePresent) numEmptyCells = 2;
        cout<<numEmptyCells<<endl;
        // just check if we got 1. 0. 1.  then we cal fill middle one and replace with
        // every other 
    }

    return 0;
}
