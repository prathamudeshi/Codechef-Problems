// https://www.codechef.com/START171D/problems/VOLCANO

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        vector<int> arr(n), ans(n, INT_MAX);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //find first zero
        int zer;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                zer = i;
                ans[i] = 0;
                // going left
                int m = 0;
                for(int i = zer -1;i>=0;i--){
                    if(arr[i] == 0)
                        break;
                    if(m<arr[i]){
                        ans[i] = min(ans[i],(arr[i] + p -1)/p);
                        m = p*((arr[i] + p -1)/p);
                    }
                    else if(m >= arr[i]){
                        ans[i] = min(m/p, ans[i]);
                    }
                }
                //going right
                m=0;
                for(int i = zer+1;i<n;i++){
                    if(arr[i] == 0)
                        break;
                    if(m<arr[i]){
                        ans[i] = min(ans[i],(arr[i] + p -1)/p);
                        m = p*((arr[i] + p -1)/p);
                    }
                    else if(m >= arr[i]){
                        ans[i] = min(ans[i], m/p);
                    }
                 }
            }
        }
        for(int i=0;i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
}
