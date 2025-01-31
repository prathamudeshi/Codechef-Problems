// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/PLPROCESS?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        int a[n];
        long long int sum = 0;
        for(int i = 0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
    
        long long int ans = sum;
        long long int curr = 0;
        for(int i = 0; i<n-1; i++){
            curr += a[i];
            ans = min(ans, max(curr, sum-curr));
        }
        cout<<ans<<endl;
	}
	return 0;
}
