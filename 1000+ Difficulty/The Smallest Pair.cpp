//https://www.codechef.com/problems/SMPAIR
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n],min=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(i==j)
	                continue;
	            if(arr[i]+arr[j]<min)
	            {
	                min=arr[i]+arr[j];
	            }
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}
