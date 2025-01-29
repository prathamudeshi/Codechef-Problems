// https://www.codechef.com/START171D/problems/WHITEWALL

#include <bits/stdc++.h>
using namespace std;

vector<string> pat = {
    "RGB", "RBG", "GRB", "GBR", "BRG", "BGR"
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;
        cin >> N >> S;
        int min_changes = INT_MAX;
        for (const string& pat : pat) {
            int current = 0;
            for (int i = 0; i < N; ++i) {
                if (S[i] != pat[i % 3]) {
                    current++;
                }
                if (current >= min_changes) {
                    break; // Early exit if current exceeds the minimum found
                }
            }
            if (current < min_changes) {
                min_changes = current;
            }
        }
        cout << min_changes << '\n';
    }
    return 0;
}
