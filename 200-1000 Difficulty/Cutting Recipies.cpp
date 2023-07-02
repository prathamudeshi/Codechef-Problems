//https://www.codechef.com/problems/RECIPE
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=*min_element(arr,arr+n);i>=1;i--)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(arr[j]%i!=0)
	                break;
	            else if(j==n-1)
	                a=i;
	        }
	        if(a==i)
	            break;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]/a<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
