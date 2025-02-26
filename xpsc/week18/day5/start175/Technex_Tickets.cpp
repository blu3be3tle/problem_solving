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

int solve(int n)
{
    int time = 0;
    while (n > 0)
    {
        time++;
        if (n == 1 || n == 3)
        {
            return time;
        }
        if (n == 2)
        {
            return time + 1;
        }
        n -= 2;
    }
    return time;
}

int main()
{

    fastIO;
    tc
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}