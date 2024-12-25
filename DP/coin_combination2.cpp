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
    int n, x;
    cin >> n >> x;
    v32 arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(x+1));
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }
    for(int i = n-1;i >= 0;i--){
        for (int k = 1; k <= x ; k++)
        {
            int skip = dp[i+1][k];
            int pick = 0;
            if (arr[i] <= k)
            {
                pick = dp[i][k-arr[i]];
            }
            dp[i][k] = (skip+pick)%MOD;
            
        }
    }
    cout<<dp[0][x]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
