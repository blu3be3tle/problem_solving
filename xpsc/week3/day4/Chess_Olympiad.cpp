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

    double n = x + 0.5 * y + 4 - (x + y + z);
    double m = 0.5 * y + z;

    if (n > m)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
