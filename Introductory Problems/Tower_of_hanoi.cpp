#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(int x, int a, int b, int c)
{
    if (x == 0)
    {
        return;
    }
    solve(x - 1, a, c, b);
    cout << a << " " << c << endl;
    solve(x - 1, b, a, c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    solve(n, 1, 2, 3);
    return 0;
}