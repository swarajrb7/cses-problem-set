#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int maxn = 2e5 + 1;

/*void solve()
{
    int n, t;
    cin >> n >> t;
    int y;
        pair<int, int>
            pr[maxn];
    for (int i = 1; i <= n; i++)
    {
        cin >> y;
        pr[i] = {y, i};
    }
    sort(pr + 1, pr + n + 1);

    auto find = [&](int x) -> auto
    {
        int l = 1;
        int r = n;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (pr[mid].first == x)
            {
                return pr[mid].second;
            }
            else if (pr[mid].first < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return 0;
    };

    for (int i = 1; i <= n; i++)
    {
        int dif = find(t - pr[i].first);
        if (dif != 0 && dif != pr[i].second)
        {
            cout << pr[i].second << " " << dif << endl;
            return;
        }
    }

    cout << "IMPOSSIBLE" << endl;
}*/

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}