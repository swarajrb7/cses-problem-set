#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    string s;
    cin >> s;
    set<char> st;
    string ans = " ";
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
        if ((int)st.size() == 4)
        {
            ans += s[i];
            st.clear();
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}