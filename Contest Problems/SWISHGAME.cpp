// https://www.codechef.com/START171D/problems/SWISHGAME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int m, k;
        cin>>m>>k;
        string str;
        cin>>str;
        int p = 0,s = 0;
        for(int i=0;i<str.size();i++){
            if(str[i] == 'P')
                p++;
            else s++;
        }
        if(k<=s)
        {
            cout<<m<<endl;
            // continue;
        }
        else{
            cout<<m+k-1-s<<endl;
        }
    }
}
