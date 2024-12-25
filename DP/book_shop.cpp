#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> price(n + 1);
    vector<int> pages(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> price[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> pages[i];
    }
    int dp[n + 1][x + 1];
    memset(dp, -1, sizeof(dp));
    dp[0][0] = 0;
    // state : max pages I can have when i buy 1st i books and spend x money;
    for (int i = 0; i <= n; i++)
    {
        for (int mon = 0; mon <= x; mon++)
        {
            if (mon == 0 || i == 0)
            {
                dp[i][mon] = 0;
            }
            else
            {
                int op1, op2;
                if (i == 1)
                {
                    op1 = 0;
                }
                else
                {
                    op1 = dp[i - 1][mon];
                }
                if (mon < price[i])
                {
                    op2 = 0;
                }
                else
                {
                    op2 = pages[i] + dp[i - 1][mon - price[i]];
                }
                dp[i][mon] = max(op1, op2);
            }
        }
    }

    cout << dp[n][x];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}