#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int t;
    cin >> t;

    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
            idx = i;
    }
    if (idx)
    {
        cout << idx;
    }
    else
        cout << -1;
    return 0;
}