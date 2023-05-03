//https://www.codechef.com/problems/MAX_DIFF?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,s,diff=0;
	    cin>>n>>s;
	    if(n>=s)
	        diff = s;
	    else
	        diff = n - (s-n); 
	    cout<<diff<<endl;
	}
	return 0;
}
