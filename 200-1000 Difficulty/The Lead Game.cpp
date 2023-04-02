//https://www.codechef.com/problems/TLG
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,w,max=INT_MIN,c1=0,c2=0;
	cin>>n;
	int p1[n],p2[n];
	for(int i=0;i<n;i++)
	{
	    cin>>p1[i]>>p2[i];
	    c1+=p1[i];
	    c2+=p2[i];
	    if(c1>c2)
	    {
	        if(c1-c2>max)
	        {
	            max=c1-c2;
	            w=1;
	        }
	    }
	    else
	    {
	        if(c2-c1>max)
	        {
	            max=c2-c1;
	            w=2;
	        }
	    }
	}
	cout<<w<<" "<<max;
	return 0;
}
