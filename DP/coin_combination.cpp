#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MOD = 1e9 + 7;

// dp state : the no. of ways to form sum == i from coind c1,c2,c3....
// ans = dp[x]

void solve()
{
    int n, x;
    cin >> n >> x;
    int dp[x + 1];
    dp[0] = 1;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= x; i++)
    {
        dp[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (i >= arr[j])
            {
                dp[i] = (dp[i] + dp[i - arr[j]]) % MOD;
            }
        }
    }
    cout << dp[x] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}