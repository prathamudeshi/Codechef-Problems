// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/JOGGING?tab=solution

#include <iostream>
using namespace std;
const long long MOD = 1000000007;

long long modExp(long long base, int exp, long long mod) {
    long long result = 1;
    while(exp > 0) {
        if(exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        long long ans = (x * modExp(2, n-1, MOD)) % MOD;
        cout << ans << "\n";
    }
    return 0;
}
