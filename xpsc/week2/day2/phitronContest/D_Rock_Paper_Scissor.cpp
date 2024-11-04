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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t;

        cin >> s >> t;

        int chef = 0;
        int chefina = 0;

        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == 'R' && t[i] == 'S')
            {
                chef++;
            }
            else if (s[i] == 'S' && t[i] == 'R')
            {
                chefina++;
            }

            else if (s[i] == 'S' && t[i] == 'P')
            {
                chef++;
            }
            else if (s[i] == 'P' && t[i] == 'S')
            {
                chefina++;
            }

            else if (s[i] == 'P' && t[i] == 'R')
            {
                chef++;
            }
            else if (s[i] == 'R' && t[i] == 'P')
            {
                chefina++;
            }
        }

        int num = 0;
        if (chefina >= chef) {
            num = ((chef + chefina) / 2) + 1;
            cout << num - chef << endl;
        } 
        else 
            cout << 0 << endl;
    }
    return 0;
}