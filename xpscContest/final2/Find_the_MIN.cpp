#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
using namespace std;

int main()
{
    fastIO;
    int q, x, v;
    multiset<int> mySet;
    cin >> q;
    while (q--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> v;
            mySet.insert(v);
        }
        else if (x == 2)
        {
            if (mySet.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                auto minVal = *mySet.begin();
                cout << minVal << endl;
                mySet.erase(minVal);
            }
        }
    }

    return 0;
}