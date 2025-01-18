// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/AVGPERM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        arr[1] = n;
        arr[n] = n-1;
        arr[2] = n-2;
        arr[n-1] = n-3;
        for(int i=3;i<=n-2;i++){
            arr[i] = i;
        }
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
