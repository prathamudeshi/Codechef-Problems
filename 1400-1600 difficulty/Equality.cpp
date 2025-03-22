// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/EQUALITY?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n], sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sum = sum/(n-1);
        for(int i=0;i<n;i++){
            cout<<sum-a[i]<<" ";
        }
        cout<<endl;
    }
}
