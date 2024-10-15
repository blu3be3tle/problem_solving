#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
        }
        else if (a[i] < min2)
        {
            min2 = a[i];
        }
    }
    cout << min1 + min2;
    return 0;
}