// given a permutation that is number of len n from 1 to n with no duplicates
// it num i-1 < num i > num i+1
// swap num[i], num[i+1]

// if the first position is 1 that means we can swap all others numbers to get sorted order
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];
        for(int i = 1; i < n-1; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
        }
        if (arr[0] == 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << '\n';
    }
 
    return 0;
}