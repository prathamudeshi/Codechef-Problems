//https://www.codechef.com/problems/JOHNY
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n],k;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    cin>>k;
	    int a=arr[k-1];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=1;j<n-i;j++)
	        {
	            if(arr[j]<arr[j-1])
	            {
	                int temp;
	                temp=arr[j-1];
	                arr[j-1]=arr[j];
	                arr[j]=temp;
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==a)
	        {
	            cout<<i+1<<endl;
	        }
	    }
	}
	return 0;
}
