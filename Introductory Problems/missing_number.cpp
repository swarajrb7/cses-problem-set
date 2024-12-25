#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    int n;
    cin >> n;
    /*vector<int> arr(n+1, -1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr[x] = x;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == -1)
        {
            cout << i;
        }
    }*/
    ll sum = 0;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
     
    cout<<n*(n+1)/2 - sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}