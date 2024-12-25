#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll MOD = 1e9 + 9;

//***************RABIN-KARP ALGORITHM***********************
// https://cses.fi/paste/26699c8efa86166559602a/

void solve()
{
    string txt, pat;
    cin >> txt >> pat;
    int t = txt.size(), p = pat.size();

    vector<ll> pow(max(t, p));
    pow[0] = 1;
    for (int i = 1; i < pow.size(); i++)
    {
        pow[i] = (31 * pow[i - 1]) % MOD;
    }

    vector<ll> pret(t + 1, 0);
    for (int i = 0; i < t; i++)
    {
        pret[i + 1] = (pret[i] + (txt[i] - 'a' + 1) * pow[i]) % MOD;
    }

    
    ll pt = 0;
    for (int i = 0; i < p; i++)
    {
        pt = (pt + (pat[i] - 'a' + 1) * pow[i]) % MOD;
    }

    int ans = 0;
    for (int i = 0; i + p - 1 < t; i++)
    {
        long long cur_h = (pret[i + p] + MOD - pret[i]) % MOD;
        if (cur_h == pt * pow[i] % MOD)
            ans++;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}