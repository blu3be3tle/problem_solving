#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int even = 0, odd = 0;
        
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                if (i % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
        
        if (even > odd)
            cout << 1 << endl;
        else if (even == odd)
            cout << 0 << endl;
        else
            cout << -1 << endl;
    }
    
    return 0;
}