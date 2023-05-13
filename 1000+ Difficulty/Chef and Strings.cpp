//https://www.codechef.com/problems/CHEFSTR1
#include <iostream>
#define l long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    l int n;
	    cin>>n;
	    l int arr[n],ans=0;
	    for(l int i=0;i<n;i++)
	        cin>>arr[i];
	    for(l int i=1;i<n;i++)
	        ans+=abs(arr[i]-arr[i-1]);
	    cout<<ans-n+1<<endl;
	}
	return 0;
}
