// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/MAXAGRY?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n,k, ans = 0;
        cin>>n>>k;
        k = min(n/2,k);
        cout<<k*(2*(n-k)-1)<<endl;
    }
}
