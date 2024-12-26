// Online C++ compiler to run C++ program online
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        // if k == 1 array should always be sorted else ans will be no
        // in any of other cases ans will be yes
        string ans = "YES";
        int prev = -1;
        bool isSorted = true;
        for(int i = 0; i < n; i++){
            int num;
            cin>>num;
            if(num < prev){
                isSorted = false;
            }
            prev = num;
        }
        if(k == 1 && !isSorted) ans = "NO";
        cout<<ans<<endl;
    }

    return 0;
}
// I didn't even store the numbers, how clever I am.

// command to run g++ -std=c++17 01.cpp -o main
// command to run ./main