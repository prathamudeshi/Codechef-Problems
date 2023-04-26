//https://www.codechef.com/problems/PRICECON
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,rev1=0,rev2=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        rev1+=arr[i];
	        if(arr[i]>k)
	            arr[i]=k;
	        rev2+=arr[i];     
	    }
	    cout<<rev1-rev2<<endl;
	}
	return 0;
}
