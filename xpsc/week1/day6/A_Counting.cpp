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
    int x, y;
    cin >> x >> y;
    int count = 0;
    if (y > x)
    {
        for (int i = x; i <= y; i++)
        {
            count++;
        }
        cout << count << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}