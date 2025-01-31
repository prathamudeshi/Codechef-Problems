// https://www.codechef.com/viewsolution/1127814204

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k, mini = INT_MAX, maxi = INT_MIN;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] > maxi)
                maxi = arr[i];
            if(arr[i] < mini)
                mini = arr[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
            
        cout<<(maxi+mini<=k ? "YES" : "NO")<<endl;
    }
}
