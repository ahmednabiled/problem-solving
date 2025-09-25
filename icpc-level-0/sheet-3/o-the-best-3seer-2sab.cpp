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

struct Cup {
    int v, l;
    double dens;
};

void solve() {
    int n, L;
    cin >> n >> L;
    vector<Cup> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].v >> arr[i].l;
        arr[i].dens = (double)arr[i].v / arr[i].l;
    }

    sort(arr.begin(), arr.end(), [](const Cup& a, const Cup& b) {
        return a.dens > b.dens;
    });

    double val = 0;
    for (int i = 0; i < n && L > 0; ++i) {
        if (L >= arr[i].l) {
            L -= arr[i].l;
            val += arr[i].v;  
        } else {
            val += arr[i].dens * L; 
            L = 0;
            break;
        }
    }
    cout << fixed << setprecision(6) << val << endl;
}

signed main() {
    fastIO();
    IO();
    solve();
    return 0;
}