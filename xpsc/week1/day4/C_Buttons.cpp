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
    int a, b;
    cin >> a >> b;

    int ans1 = a + b;
    int ans2 = a + (a - 1);
    int ans3 = b + (b - 1);

    if (ans1 > ans2 && ans1 > ans3)
    {
        cout << ans1;
    }
    else if (ans2 > ans1 && ans2 > ans3)
    {
        cout << ans2;
    }
    else if (ans3 > ans1 && ans3 > ans2)
    {
        cout << ans3;
    }
    else
        cout << ans1;

    return 0;
}