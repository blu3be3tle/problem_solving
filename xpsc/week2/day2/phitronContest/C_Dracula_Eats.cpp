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
        cin >> n;

        int x = 0;
        for (int i = 2; i <= n; i += 7)
        {
            x++;
        }
        cout << x << endl;
    }
    return 0;
}