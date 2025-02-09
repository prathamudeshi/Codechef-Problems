// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/DIRECTI

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        vector<string> str(n), ans(n);
        stack<string> stk, loc;
        for(int i=0;i<n;i++){
            getline(cin, str[i]);
            // cout<<str[i]<<endl;
            if(str[i][0] == 'R'){
                stk.push("Left");
            }
            else if(str[i][0] == 'L'){
                stk.push("Right");
            }
            int temp = str[i].find("on ");
            loc.push(str[i].substr(temp+3, str[i].size()-1));
        }
        bool s = true;
        int i = 0;
        while(!loc.empty()){
            if(s){
                ans[i] = "Begin on "+loc.top();
                s = false;
            }
            else{
                ans[i] = stk.top() + " on " + loc.top();
                stk.pop();
            }
            loc.pop();
            i++;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<endl;
        }
        cout<<endl;
    }
}
