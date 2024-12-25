#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    string s;
    cin >> s;
    int ans = 1;
    int c = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            c++;
            ans = max(c, ans);
        }

        else if (s[i] != s[i - 1])
        {
            ans = max(c, ans);
            c = 1;
        }
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