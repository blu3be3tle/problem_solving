    #include <bits/stdc++.h>
    #define fastIO               \
        ios::sync_with_stdio(0); \
        cin.tie(0);              \
        cout.tie(0);
    using namespace std;
    #define endl '\n'

    int main()
    {
        int x;
        cin >> x;

        vector<int> a = {1, 2, 4};
        int count = 0;

        for (int t : a)
        {
            if (x >= t)
            {
                x -= t;
                count++;
            }
        }

        cout << count << endl;
        return 0;
    }
