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

int fibo(int a1, int a2, int a3, int a4, int a5)
{
    int count = 0;
    if (a1 + a2 == a3)
        count++;
    if (a2 + a3 == a4)
        count++;
    if (a3 + a4 == a5)
        count++;
    return count;
}

int main()
{
    fastIO;

    tc
    {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        vector<int> candidates = {a1 + a2, a4 - a2, a5 - a4};
        int maxFibo = 0;

        for (int a3 : candidates)
        {
            maxFibo = max(maxFibo, fibo(a1, a2, a3, a4, a5));
        }

        cout << maxFibo << endl;
    }

    return 0;
}