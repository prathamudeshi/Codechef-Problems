// https://www.codechef.com/START177C/problems/ORDDIST

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> x(n), y(n);
        for(int i=0;i<n;i++)
            cin>>x[i];
        for(int i=0;i<n;i++)
            cin>>y[i];
        
        int idx, diff = 0;
        for(int i=0;i<n;i++)
        {
            if(x[i] == y[0]){
                idx = i;
                break;
            }
        }
        bool ans = true;
        for(int i=1;i<n;i++){
            if(abs(y[i] - x[idx])<diff || (abs(y[i] - x[idx])==diff && y[i]<y[i-1])){
                cout<<-1<<endl;
                ans = false;
                break;
            }
            diff = abs(y[i] - x[idx]);
            // cout<<diff;
        }
        if(ans == true)
        cout<<idx+1<<endl;
    }
}

