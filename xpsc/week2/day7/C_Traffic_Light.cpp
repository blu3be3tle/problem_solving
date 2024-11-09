#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
using namespace std;

int main() {
    fastIO;
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        string s;
        
        cin >> n >> c >> s;
        

        vector<int> green;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'g') {
                green.push_back(i);
            }
        }

        int maxTime = 0;


        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {

                auto it = lower_bound(green.begin(), green.end(), i);
                
                int dist;
                if (it == green.end()) {

                    dist = n - i + green[0];
                } else {

                    dist = *it - i;
                }
                

                maxTime = max(maxTime, dist);
            }
        }
        
        cout << maxTime << endl;
    }
    return 0;
}
