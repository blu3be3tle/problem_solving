#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = n - k; i <= n; i++)
            cout << i << " ";
        for (int i = n - k - 1; i >= 1; i--)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}