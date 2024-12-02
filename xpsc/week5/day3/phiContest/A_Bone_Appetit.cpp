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
    int n, m, x, y;
    cin >> n >> m;
    cin >> x >> y;
    cout << n * x + m * y;
    return 0;
}