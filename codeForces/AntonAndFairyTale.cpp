#include <iostream>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
#define int long long

void init_code() {
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
    int n, m;
    cin >> n;
    cin >> m;

    if (m >= n)
    {
        cout << n << endl;
        return 0;
    }

    int s = 0;
    int e = 1e10; //1*10^10
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        int value = (mid * (mid + 1)) / 2;
        int target = n - m;

        if (value >= target)
        {
            ans = mid;
            e = mid - 1;
        }

        else {
            s = mid + 1;
        }
    }

    cout << ans + m << endl;
}