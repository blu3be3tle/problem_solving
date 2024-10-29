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

    if (x >= y)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}