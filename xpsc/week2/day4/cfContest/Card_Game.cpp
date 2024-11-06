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
        int n, x;
        cin >> n >> x;

        int even = n / 2;
        int odd = n - even;

        if (x % 2 == 0)
        {
            cout << even - 1 << endl;
        }
        else
            cout << odd - 1 << endl;
    }
    return 0;
}