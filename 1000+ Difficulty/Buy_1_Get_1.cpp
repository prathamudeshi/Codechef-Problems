// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BUY1GET1

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        int ans=0;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i]) != mp.end()){
                mp[s[i]]++;
            }
            else{
                mp[s[i]] = 1;
            }
        }
        for(auto it:mp){
            int x = it.second;
            ans += (x/2) + (x%2);
        }
        cout<<ans<<endl;
    }
}
