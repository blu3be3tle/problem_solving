#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        int change = 100 - x;
        
        int maxChange = (change > 0) ? (change / 10) * 10 : 0;
        
        cout << maxChange << endl;
    }
    
    return 0;
}