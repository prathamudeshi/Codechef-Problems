//https://www.codechef.com/problems/TWOSTR?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    bool ans=true;
	    string x,y;
	    cin>>x>>y;
	    for(int i=0;i<x.length();i++)
	    {
	        if(x[i]!=y[i] && x[i]!='?' && y[i]!='?')
	            ans=false;
	    }
	    cout<<(ans?"Yes":"No")<<endl;
	}
	return 0;
}
