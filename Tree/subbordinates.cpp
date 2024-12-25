// https://cses.fi/problemset/task/1674
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int dfs(int node, int par, vector<int> adj[], vector<int> &dp)
{
    if (dp[node] != -1)
    {
        return dp[node];
    }

    int sub = 0;
    for (auto it : adj[node])
    {
        if (it == par)
        {
            continue;
        }
        sub += dfs(it, node, adj, dp) + 1;
    }
    return dp[node] = sub;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> adj[n + 1];
    vector<int> dp(n + 1, -1);
    for (int i = 2; i <= n; i++)
    {
        int u, v = i;
        cin >> u;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << dfs(i, 0, adj, dp)<< " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
