// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/SOD3?tab=solution

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        cout<<r/3 - (l-1)/3<<endl;
    }
}
