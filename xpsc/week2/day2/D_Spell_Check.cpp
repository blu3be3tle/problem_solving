#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
using namespace std;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s; 
        
        if (n == 5 && is_permutation(s.begin(), s.end(), "Timur"))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
