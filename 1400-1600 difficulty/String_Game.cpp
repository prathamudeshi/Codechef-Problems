// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/STRAME?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n, cz = 0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i] == '0')
                cz++;
        }
        cout<<(min(cz, n - cz)%2?"Zlatan":"Ramos")<<endl;
    }
}
