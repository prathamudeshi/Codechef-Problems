// https://www.codechef.com/START171D/problems/ADVITIYA

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s, og = "ADVITIYA";
        cin>>s;
        int ans = 0;
        for(int i=0;i<og.size();i++){
            if(int(s[i]) > int(og[i])){
                ans += int('Z') - int(s[i]) + int(og[i]) - int('A') + 1;
            }
            else if(int(s[i]) < int(og[i])){
                ans += int(og[i]) - int(s[i]);
            }
        }
        cout<<ans<<endl;
    }
}
