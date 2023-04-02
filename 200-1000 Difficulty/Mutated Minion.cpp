//https://www.codechef.com/problems/CHN15A
#include <iostream>
using namespace std;

int main() {
	int t,n,k,ans=0;
	cin>>t;
	while(t--)
	{
	    ans=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        (arr[i]+k)%7==0?ans++:ans=ans;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
