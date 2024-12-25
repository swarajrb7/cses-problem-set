#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v32 vector<int>
#define v64 vector<ll>
#define vv32 vector<vector<int>>
#define vv64 vector<vector<ll>>
#define vp32 vector<pair<int, int>>
#define mp32 map<int, int>
#define mp64 map<ll, ll>
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl "\n"
const int MOD = 1e9 + 7;

int modular_multi(ll a, ll b)
{
    return (a % MOD * b % MOD) % MOD;
}

ll gcd(ll a, ll b)
{
    // same as __gcd()
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int binary_expo(ll x, ll y)
{
    int res = 1;

    while (y)
    {
        if (y % 2)
        {
            res = (((res % MOD) * (x % MOD)) % MOD);
            y--;
        }
        else
        {
            x = (((x % MOD) * (x % MOD)) % MOD);
            y /= 2;
        }
    }

    return res;
}

void solve()
{
    int n;
    cin >> n;
    vp32 p;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        p.pb(make_pair(x, y));
    }
    v32 arr(n), dep(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = p[i].ff;
        dep[i] = p[i].ss;
    }
    sort(all(arr));
    sort(all(dep));
    int i = 0, j = 0;
    int cur = 0, ans = 0;
    while (i < n && j < n)
    {
        if (arr[i] < dep[j])
        {
            i++, cur++;
            ans = max(cur, ans);
        }
        else
        {
            j++, cur--;
        }
    }
    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
