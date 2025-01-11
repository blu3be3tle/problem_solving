#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fastIO;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        int key, l = 0, r = n - 1, mid;
        cin >> key;

        bool found = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key == a[mid])
            {
                found = true;
                break;
            }
            else if (key < a[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (found)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}
