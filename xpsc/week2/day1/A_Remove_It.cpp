#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
using namespace std;

int main()
{
    fastIO;
    int n, m;
    cin >> n >> m;

    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] != m)
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}