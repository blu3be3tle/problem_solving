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

int main()
{
    fastIO;
    tc
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        int count0 = 0;
        for (int num : a)
        {
            if (num == 0)
            {
                count0++;
            }
            else
            {
                freq[num]++;
            }
        }

        int countPair = 0;
        for (auto &[key, val] : freq)
        {
            countPair += val / 2;
        }

        int removed = 0;
        if (countPair + count0 >= 1)
        {
            removed = countPair + (countPair + count0 - 1);
        }
        else
        {
            removed = 0;
        }

        cout << n - removed << endl;
    }

    return 0;
}
