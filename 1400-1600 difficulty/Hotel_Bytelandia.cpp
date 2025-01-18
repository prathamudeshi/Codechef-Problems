// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/HOTEL?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n), dep(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>dep[i];
        }
        
        //solution
        int ans = INT_MIN;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j = arr[i]; j<dep[i]; j++){
                mp[j]++;
                ans = max(ans, mp[j]);
            }
        }
        cout<<ans<<endl;
    }
}
