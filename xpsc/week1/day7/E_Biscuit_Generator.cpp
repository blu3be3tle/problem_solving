#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

int main()
{
    fastIO;
    int a, b, c;
    cin >> a >> b >> c;

    int u = c / a;
    int ans = u * b;
    cout << ans;
    return 0;
}
