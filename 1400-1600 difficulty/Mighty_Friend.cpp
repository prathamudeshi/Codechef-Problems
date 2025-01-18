// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/MTYFRI

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> arr(n), motu, tomu;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i%2 == 0)
                motu.push_back(arr[i]);
            else
                tomu.push_back(arr[i]);
        }
        sort(motu.begin(), motu.end(), greater<int>());
        sort(tomu.begin(), tomu.end());
        for(int i=0;i<min(tomu.size(), motu.size()); i++){
            if(motu[i] > tomu[i] && k>0){
                swap(motu[i], tomu[i]);
                k--;
            }
        }
        int motusum = accumulate(motu.begin(), motu.end(), 0);
        int tomusum = accumulate(tomu.begin(), tomu.end(), 0);
        if(motusum >= tomusum)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
