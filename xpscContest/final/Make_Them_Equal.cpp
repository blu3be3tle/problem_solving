#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t; 
    while (t--) {
        int n, k;
        cin >> n >> k; 
        string a, b;
        cin >> a >> b; 
        
        int count = 0; 
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                count++;
            }
        }
        
        if (count <= k) {
            cout << "YES\n";
        } else {    
            cout << "NO\n";
        }
    }
    
    return 0;
}
