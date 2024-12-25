#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    auto ok = [&](ll x) -> bool
    {
        ll cnt = 0;
        for (ll i : arr)
        {
            cnt += x / i;
            if (cnt >= k)
            {
                break;
            }
        }
        if (cnt >= k)
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    ll l = 0, r = 1e18 + 1, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}