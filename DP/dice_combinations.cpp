#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MOD = 1e9 + 7;
const int maxN = 1e6;
long long dp[maxN];

void solve()
{
    int n;
    cin >> n;
    dp[0] = 1;
    /***************dp state*****************/ 
    //dp[x] = number of ways to make sum x using numbers from 1 to 6.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (j > i)
            {
                break;
            }
            /*Transition*/
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }
    cout<<dp[n]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    
    
        solve();
    
    return 0;
}