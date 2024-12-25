#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
    string s;
    cin >> s;
    string x;
    string y;
    int arr[26] = {};
    bool flag = true;
    int cnt = 0;
    for (char z : s)
    {
        ++arr[z - 'A'];
    }
    for (int i = 0; i < 26; i++)
    {
        cnt += arr[i] % 2;
    }
    if (cnt > 1)
    {
        flag = false;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 != 1)
        {
            for (int j = 0; j < arr[i] / 2; j++)
            {
                x += (char)('A' + i);
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if(arr[i] % 2 == 1)
        {
            for (int j = 0; j < arr[i] ; j++)
            {
                y += (char)('A' + i);
            }
            
        }
    }


    if (flag)
    {
        cout << x << y ;
        reverse(x.begin(), x.end());
        cout << x << endl;
    }
    else
    {
        cout << "NO SOLUTION" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}