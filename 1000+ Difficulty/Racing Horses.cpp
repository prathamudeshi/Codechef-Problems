//https://www.codechef.com/problems/HORSES
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unsigned int s[n];
	    int min=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
    	        if(s[j]-s[i]<min && i!=j)
	            {
	                min=s[j]-s[i];
	            }
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}
