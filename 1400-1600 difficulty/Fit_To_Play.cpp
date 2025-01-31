// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/PLAYFIT

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,ans=INT_MIN;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mini = arr[0];
        for(int i=1;i<n;i++){
            ans = max(ans, arr[i] - mini);
            if(arr[i]<mini)
                mini = arr[i];
        }
        if(ans>0)
            cout<<ans<<endl;
        else
            cout<<"UNFIT"<<endl;
    }
}
