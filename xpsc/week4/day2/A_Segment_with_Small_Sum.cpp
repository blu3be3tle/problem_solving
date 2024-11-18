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

        int n;
        ll k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0, r = 0, ans = 0;
        ll sum = 0;
        while (r < n)
        {
            sum += a[r];
            if (sum <= k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                sum -= a[l];
                l++;
            }
            r++;
        }

        cout << ans << '\n';

        return 0;
    }