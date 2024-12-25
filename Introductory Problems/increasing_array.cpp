#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    int n;
    cin >> n;
    ll ans = 0;
    int mx = 0;
    /*vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            ans += abs(arr[i] - arr[i+1]);
            arr[i+1] = arr[i];
        }
    }*/

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mx = max(x, mx);
        ans += mx - x;
    }

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}