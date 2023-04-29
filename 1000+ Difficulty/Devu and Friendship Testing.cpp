//https://www.codechef.com/problems/CFRTEST
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ans=n,arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        for(int j=0;j<i;j++)
	        {
	            if(arr[j]==arr[i])
	            {
	                ans--;
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
