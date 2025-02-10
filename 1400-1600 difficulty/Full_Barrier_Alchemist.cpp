// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/PIPSQUIK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,h,y1,y2,l, ans = 0;
        cin>>n>>h>>y1>>y2>>l;
        bool passed = true;
        vector<int> type(n), height(n);
        for(int i=0;i<n;i++){
            cin>>type[i]>>height[i];
            if(passed){
                if(type[i] == 1 && h-y1<=height[i]){
                    ans++;
                }
                else if(type[i] == 2 && height[i]<=y2){
                    ans++;
                }
                else{
                    if(l>1){
                        l--;
                        ans++;
                    }
                    else{
                        passed = false;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
