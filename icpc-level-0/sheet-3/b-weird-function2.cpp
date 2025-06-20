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

string f(int a, string s1, string s2)
{
    string res;

    if (a == 1)
    {
        res = s1 + s2;
    }
    else
    {
        res = s2 + s1;
    }
    return res;
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << f(1, f(1, f(0, s1, s2) + s1, s2), s1 + f(0, s1 + s2, f(1, s2, s1)));
}

signed main()
{
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
