#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int a, b;
    cin >> a >> b;

    vector<vector<int>> dp(a + 1, vector<int>(b + 1));
    for (int height = 1; height <= a; height++)
    {
        for (int width = 1; width <= b; width++)
        {
            if (width == height)
            {
                dp[height][width] == 0;
            }
            else
            {
                int ans = INT_MAX;
                for (int i = 1; i < width; i++)
                {
                    ans = min(ans, 1 + dp[height][width - i] + dp[height][i]);
                }
                for (int i = 1; i < height; i++)
                {
                    ans = min(ans, 1 + dp[height- i][width] + dp[i][width]);
                }
                dp[height][width] = ans;
            }
        }
    }
    cout << dp[a][b] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}