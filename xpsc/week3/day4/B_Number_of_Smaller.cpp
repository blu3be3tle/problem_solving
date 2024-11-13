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
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int l = 0, r = 0, count = 0;
        while (r < m)
        {
            if (l < n && a[l] < b[r])
            {
                l++, count++;
            }
            else
            {
                cout << count << " ";
                r++;
            }
        }
        return 0;
    }