// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/INFERNO

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,sum = 0,m=0;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=ceil(double(arr[i])/x);
            m=max(arr[i],m);
        }
        cout<<min(sum, m)<<endl;
    }
}
