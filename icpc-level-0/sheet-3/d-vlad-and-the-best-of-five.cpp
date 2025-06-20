#include <bits/stdc++.h>
#define int long long
using namespace std;

void IO()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve()
{
    char c;
    int a_cnt = 0;
    int b_cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> c;
        if (c == 'A')
        {
            a_cnt++;
        }
        else
        {
            b_cnt++;
        }
    }
    if (a_cnt > b_cnt)
    {
        cout << "A\n";
    }
    else
    {
        cout << "B\n";
    }
}

signed main()
{
    fastIO();
    IO();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
