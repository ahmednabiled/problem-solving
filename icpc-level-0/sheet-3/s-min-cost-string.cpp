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
    string str; 
    cin >> str;
    vector<int> cost(26);
    for (int i = 0; i < 26; i++) cin >> cost[i];

    auto letterCost = [&](char ch) {
        return cost[ch - 'a'];
    };

    int n = str.size();

    // Special case: all '?'
    if (count(str.begin(), str.end(), '?') == n) {
        // Fill with 'a' (lexicographically smallest)
        for (auto &ch : str) ch = 'a';
        cout << 0 << "\n" << str << "\n";
        return;
    }

    // Process contiguous segments of '?'
    int i = 0;
    while (i < n) {
        if (str[i] == '?') {
            int j = i;
            while (j < n && str[j] == '?') j++;

            char left = (i > 0 ? str[i - 1] : 0);
            char right = (j < n ? str[j] : 0);

            char bestLetter = 'a';
            int bestPairCost = LLONG_MAX;

            for (char ch = 'a'; ch <= 'z'; ch++) {
                int currCost = 0;
                if (left) currCost += llabs(letterCost(left) - letterCost(ch));
                if (right) currCost += llabs(letterCost(ch) - letterCost(right));

                if (currCost < bestPairCost || 
                   (currCost == bestPairCost && ch < bestLetter)) {
                    bestPairCost = currCost;
                    bestLetter = ch;
                }
            }

            for (int k = i; k < j; k++) str[k] = bestLetter;
            i = j;
        } 
        
        else {
            i++;
        }
    }


    int totalCost = 0;
    for (int k = 0; k < n - 1; k++) {
        totalCost += llabs(letterCost(str[k]) - letterCost(str[k + 1]));
    }

    cout << totalCost << "\n" << str << "\n";
}

signed main() {
    fastIO();
    IO();
    solve();
    return 0;
}
