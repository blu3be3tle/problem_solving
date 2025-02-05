#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fastIO;
    tc
    {
        int x, y;
        cin >> x >> y;
        int ones = x / 2;
        int twos = y / 2;
        string left(ones, '1');
        left.append(twos, '2');
        string right = left;
        reverse(right.begin(), right.end());
        cout << left + right << endl;
    }
    return 0;
}
