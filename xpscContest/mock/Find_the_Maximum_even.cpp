#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mx = INT_MIN;


    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            mx = max(mx, arr[i]);
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (sum % 2 == 0)
            {
                mx = max(mx, sum);
            }
        }
    }

    cout << mx << '\n';
    return 0;
}
