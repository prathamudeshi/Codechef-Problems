//https://www.codechef.com/problems/BALLOON
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a=0;
	    bool ans=false;
	    cin>>n;
	    int arr[n];
	    int vib[7]={1,2,3,4,5,6,7};
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        for(int j=0;j<7;j++)
	        {
	            if(arr[i]==vib[j])
	            {
	                vib[j]==0;
	                a++;
	            }
	            if(a==7)
	                ans=true;
	        }
	        if(ans==true)
	        {
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
