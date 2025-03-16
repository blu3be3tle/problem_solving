// https://www.codechef.com/problems/XLSL?tab=statement

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
        int x, y, z, a, b, c, happy = 0;
        cin >> x >> y >> z >> a >> b >> c;

        // w/conversion
        int gotA = min(x, a);
        happy += gotA;
        x -= gotA;
        a -= gotA;

        int gotB = min(y, b);
        happy += gotB;
        y -= gotB;
        b -= gotB;

        int gotC = min(z, c);
        happy += gotC;
        z -= gotC;
        c -= gotC;

        // w conversion
        int conv1 = min(z, a);
        happy += conv1;
        z -= conv1;
        a -= conv1;

        int conv2 = min(z, b);
        happy += conv2;
        z -= conv2;
        b -= conv2;

        int conv3 = min(y, a);
        happy += conv3;
        y -= conv3;
        a -= conv3;

        cout << happy << endl;
    }
    return 0;
}
