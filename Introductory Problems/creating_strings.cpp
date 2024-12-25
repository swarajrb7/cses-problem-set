#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

set<string> st;
void solve(string pre, string suf)
{
    if (suf.size() == 0)
    {
        st.insert(pre);
        return;
    }
    for (int i = 0; i < suf.size(); i++)
    {
        solve(pre + suf[i], suf.substr(0, i) + suf.substr(i + 1));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    solve("", s);
    cout << st.size() << endl;
    for (auto ele : st)
    {
        cout << ele << endl;
    }
    return 0;
}
