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

bool isPrime(ll n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    fastIO;
    ll n;
    cin >> n;

    if (isPrime(n))
        cout << 1 << endl;
    else if (n % 2 == 0 || isPrime(n - 2))
        cout << 2 << endl;
    else
        cout << 3 << endl;
    return 0;
}
