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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> finalDigits(n);
        for (int i = 0; i < n; i++)
        {
            cin >> finalDigits[i];
        }

        vector<int> initialDigits(n);
        for (int i = 0; i < n; i++)
        {
            int count;
            string moves;
            cin >> count >> moves;

            int digit = finalDigits[i];

            for (char m : moves)
            {

                if (m == 'U')
                {
                    digit = (digit - 1 + 10) % 10;
                }
                else if (m == 'D')
                {
                    digit = (digit + 1) % 10;
                }
            }
            initialDigits[i] = digit;
        }
        for (int d : initialDigits)
        {
            cout << d << " ";
        }
        cout << endl;
    }

    return 0;
}