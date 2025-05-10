//https://www.codechef.com/problems/EZSPEAK
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	unordered_set<char> v={'a','e','i','o','u'};
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c = 0;
	    for(int i=0;i<n;i++){
	        c++;
	        if(v.count(s[i])){
	            c=0;
	        }
	        if(c==4){
	            cout<<"NO"<<endl;
	            c=0;
	            break;
	        }
	        if(i==n-1)
	            cout<<"YES"<<endl;
	    }
	}

}

