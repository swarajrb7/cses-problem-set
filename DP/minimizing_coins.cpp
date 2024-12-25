#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int maxN = 1e6;
vector<int> dp(maxN, -1);
/*unbounded knapsack problem.*/

int solve(vector<int> &arr, int x, int n)
{
    if (x == 0)
    {
        return 0;
    }
    if (dp[x] != -1)
    {
        return dp[x];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            ll res = solve(arr, x - arr[i], n);
            if (res != INT_MAX && res + 1 < ans)
            {
                ans = res + 1;
            }
        }
    }
    dp[x] = ans;
    return ans;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    dp[0] = 0;
    int s = arr.size();
    int ans = solve(arr, x, s);
    if (ans == INT_MAX)
    {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
    /**********DP State************/
    // dp[x] == minimun no of coins required to form x;
    /* dp[0] = 0;
     for (int i = 1; i <= x; i++)
     {
         for (int j = 0; j < n; j++)
         {
             if (arr[j] > i)
             {
                 break;
             }
             dp[i] = min(dp[i], dp[(i - arr[j]) + 1]);
         }
     }
     cout << (dp[x] == -1 ? -1 : dp[x]) << endl;*/
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}