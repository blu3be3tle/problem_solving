#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    long long sum = 0;
    int minOdd = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
        sum += num[i];
        

        if (num[i] % 2 != 0) {
            minOdd = min(minOdd, num[i]);
        }
    }


    if (sum % 2 == 0) {
        cout << sum << endl;
    } else {

        cout << sum - minOdd << endl;
    }

    return 0;
}
