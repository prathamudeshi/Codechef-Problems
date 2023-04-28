//https://www.codechef.com/problems/LECANDY
#include <iostream>
using namespace std;

int main() {
	int t,n,c;
	cin>>t;
	while(t--)
	{
	    cin>>n>>c;
	    int ans=0,arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        ans+=arr[i];
	    }
	    cout<<((ans<=c)?"Yes":"No")<<endl;
	}
	return 0;
}
