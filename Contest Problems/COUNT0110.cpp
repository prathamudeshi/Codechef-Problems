// https://www.codechef.com/START177C/problems/COUNT0110

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        long long N;
        cin >> N;
        long long k = N / 2;
        // Compute term1 = N * k * (k + 1) / 2
        long long term1 = N * k * (k + 1) / 2;
        // Compute term2 = k * (k + 1) * (2 * k + 1) / 6
        long long term2 = k * (k + 1) * (2 * k + 1) / 6;
        long long ans = term1 - term2 + (k + 1);
        cout << ans << "\n";
    }
    return 0;
}
