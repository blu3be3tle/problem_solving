// https://www.codechef.com/problems/PHONEYR

#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define tc    \
    ll t = 1; \
    cin >> t; \
    while (t--)
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fastIO;
    string x;
    cin >> x;
    cout << "K" << x[2] << x[3] << endl;
    return 0;
}
