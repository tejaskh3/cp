// Online C++ compiler to run C++ program online
// question 

// To travel from point 0 to point x and back, you need to calculate the minimum gas tank volume required. There are n gas stations at points a1,  
//a2, ..., an where you can fully refuel your car. Each unit of distance consumes 1 liter of gasoline.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int prev = 0, ans = 0;
        for(int i = 0; i < n; i++){
            int num; cin>>num;
            ans = max(ans, num - prev);
            prev = num;
        }
        ans = max(ans, 2 * (x - prev));
        cout<<ans<<endl;
    }

    return 0;
}
// learning : read the question carefully sir
// and also at least check the edge cases you are writing
