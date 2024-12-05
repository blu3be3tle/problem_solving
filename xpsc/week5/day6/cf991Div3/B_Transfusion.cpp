#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        long long target = sum / n;
        bool possible = true;

        long long balance = 0;
        for (int i = 0; i < n; i++)
        {
            balance += (a[i] - target);

            if (balance < 0)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
