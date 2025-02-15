// https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/ODDSUM?tab=statement

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<1+((n-1)*(n-2))<<"\n";
    }
    return 0;
}
