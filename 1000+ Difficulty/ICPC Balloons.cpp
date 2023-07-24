//https://www.codechef.com/problems/BALLOON
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>=1 && arr[i]<=7)
                ans=i;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}