#include <bits/stdc++.h>
#define int long long
using namespace std;

void IO() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
}

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


void solve() {
    string s;
    cin >> s;

    bool allUpper = true;
    bool exceptFirstUpper = true;

    for (char c : s) {
        if (!isupper(c)) {
            allUpper = false;
            break;
        }
    }

    for (size_t i = 1; i < s.size(); i++) {
        if (!isupper(s[i])) {
            exceptFirstUpper = false;
            break;
        }
    }

    if (allUpper || exceptFirstUpper) {
        for (char &c : s) {
            if (islower(c))
                c = toupper(c);
            else
                c = tolower(c);
        }
    }

    cout << s << '\n';
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
