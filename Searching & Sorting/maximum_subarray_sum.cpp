#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int n;
    cin >> n;
    ll sum = -1e18;
    ll ans = -1e18;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum = max(x, sum + x);
        ans = max(ans, sum);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}