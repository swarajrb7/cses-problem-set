#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MOD = 1e9 + 7;
const int p1 = 31, p2 = 37;
const int maxn = 1e6 + 5;

void solve()
{
    string s;
    cin >> s;

    ll pow1[maxn], pow2[maxn];
    pow1[0] = pow2[0] = 1;
    ll hv1[maxn], hv2[maxn];
    hv1[0] = hv2[0] = (int)s[0] - 'a' + 1;

    for (int i = 0; i < (int)s.size(); i++)
    {
        int h = s[i] - 'a' + 1;
        pow1[i] = (pow1[i - 1] * p1) % MOD;
        pow2[i] = (pow2[i - 1] * p2) % MOD;
        hv1[i] = ((hv1[i - 1] * p1) % MOD + h) % MOD;
        hv2[i] = ((hv2[i - 1] * p2) % MOD + h) % MOD;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}