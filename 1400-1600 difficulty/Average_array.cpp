// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/AVGARR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        if(n%2 == 0){
            int c = 1;
            for(int i=0;i<n/2;i++){
                arr[i] = x-c;
                c++;
            }
            c = 1;
            for(int i = n/2; i<n; i++){
                arr[i] = x+c;
                c++;
            }
        }
        else{
            int c = x - (n/2);
            for(int i=0;i<n;i++){
                arr[i] = c;
                c++;
            }
        }
        // cout<<"X: "<<x<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
