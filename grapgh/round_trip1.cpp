#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int n, m;
int sp, ep;
vector<vector<int>> adj;
vector<int> vis, parent;

bool dfs(int u, int p)
{
    vis[u] = true;
    parent[u] = p;
    for (auto v : adj[u])
    {
        if (v == p)
            continue;
        if (vis[v])
        {
            sp = v;
            ep = u;
            return true;
        }
        if (!vis[v])
            if (dfs(v, u))
                return true;
    }
    return false;
}

bool visit_all()
{
    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
            if (dfs(i, -1))
                return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    adj.resize(n + 1);
    vis.resize(n + 1);
    parent.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    if (!visit_all())
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    int tp = ep;
    vector<int> ans;
    while (tp != ep)
    {
        ans.pb(parent[tp]);
        tp = parent[tp];
    }
    ans.push_back(ep);
    cout << ans.size() << endl;
    for (auto c : ans)
    {
        cout << c << " ";
    }

    return 0;
}