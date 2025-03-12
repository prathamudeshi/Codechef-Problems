// https://www.codechef.com/START177C/problems/BOX2

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, K;
        cin >> X >> Y >> K;
        int D = abs(X - Y);
        int max_diff = X + Y;
        
        if (K > max_diff) {
            cout << -1 << endl;
        } else if ((D - K) % 2 != 0) {
            cout << -1 << endl;
        } else {
            if (D == K) {
                cout << 0 << endl;
            } else {
                cout << abs(D - K) / 2 << endl;
            }
        }
    }
    return 0;
}
