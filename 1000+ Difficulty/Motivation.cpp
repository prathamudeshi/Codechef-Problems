//https://www.codechef.com/problems/IMDB
#include <bits/stdc++.h>>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int s[n],r[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i]>>r[i];
	        if(s[i]>x)
	            r[i]=0;
	    }
	    cout<<*max_element(r,r+n)<<endl;
	    
	}
	return 0;
}
