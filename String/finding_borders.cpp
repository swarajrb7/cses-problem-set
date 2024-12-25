#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MOD = 1e9 + 9;
const int maxn = 1e6 + 5;
//https://cses.fi/problemset/result/5879284/
//solution using double hash******https://github.com/Jonathan-Uy/CSES-Solutions/blob/main/String%20Algorithms/Finding%20Borders.cpp-*******

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<ll> pow1(n);
    pow1[0] = 1;
    for (int i = 1; i < n; i++)
    {
        pow1[i] = (31 * pow1[i - 1]) % MOD;
    }

    ll pre = 0, suf = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int str = (s[i] - 'a' + 1);
        int end = (s[n - i - 1] - 'a' + 1);

        pre = (pre + str * pow1[i]) % MOD;
        suf = (suf * 31 + end) % MOD;

        if (pre == suf)
        {
            cout << i + 1 << " ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}