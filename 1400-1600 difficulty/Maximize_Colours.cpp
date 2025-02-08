// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/COLOUR?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        vector<int> colors(3);
        int ans = 0;
        for(int i=0;i<3;i++){
            cin>>colors[i];
            if(colors[i]>0){
                ans++;
                colors[i]--;
            }
        }
        sort(colors.begin(), colors.end(), greater<int>());
        if(colors[0]>0 & colors[1]>0){
            ans++;
            colors[0]--;
            colors[1]--;
        }
        if(colors[0]>0 & colors[2]>0){
            ans++;
            colors[0]--;
            colors[2]--;
        }
        if(colors[1]>0 & colors[2]>0){
            ans++;
            colors[1]--;
            colors[2]--;
        }
        cout<<ans<<endl;
    }
}
