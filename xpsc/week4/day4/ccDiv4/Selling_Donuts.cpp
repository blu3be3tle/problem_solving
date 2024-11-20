#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

int main()
{
    fastIO;

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sad = 0;
        for (int i = 0; i < m; i++)
        {
            int b;
            cin >> b;
            b--;
            if (a[b] > 0)
            {
                a[b]--;
            }
            else
            {
                sad++;
            }
        }

        cout << sad << '\n';
    }

    return 0;
}
