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
    int x, y, z;
    cin >> x >> y >> z;
    int m = 2 * x + 3 * y;
    int n = 2 * z + y;

    if (m < n)
        cout << m;
    else
        cout << n;
    return 0;
}