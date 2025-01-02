#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    fastIO;
    ll n, k;
    cin >> n >> k;
    vector<ll> divisors;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);

            if ((n / i) != i)
            {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    if (divisors.size() < k)
        cout << -1 << endl;
    else
        cout << divisors[k - 1] << endl;
    return 0;
}
