#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MOD = 1e9 + 7;
const int p1 = 31, p2 = 37;

void solve()
{
    string s;
    cin >> s;
    int N = s.size();
    int k;
    cin >> k;
    if (N >= 5000)
    {
        return;
    }
    ll pow1[5001], pow2[5001], sh1[5001], sh2[5001], dp[5001];
    pow1[0] = pow2[0] = 1;
    for (int i = 1; i < 5001; i++)
    {
        pow1[i] = (pow1[i - 1] * p1) % MOD;
        pow2[i] = (pow2[i - 1] * p2) % MOD;
    }
    set<int> hash1, hash2;
    ll h1 = 0, h2 = 0;
    for (int i = 0; i < N; i++)
    {
        int c = (int)(s[i] - 'a' + 1);
        h1 = (h1 * p1 + c) % MOD;
        h2 = (h2 * p2 + c) % MOD;
        hash1.insert(h1);
        hash2.insert(h2);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}