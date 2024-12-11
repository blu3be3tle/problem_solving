#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fastIO;
    double n, m;
    cin >> n >> m;
    if (m >= (n / 2))
        cout << "NEWBIE";
    else
        cout << "PRO";
    return 0;
}