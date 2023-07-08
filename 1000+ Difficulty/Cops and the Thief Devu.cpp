//https://www.codechef.com/problems/COPS?tab=statement
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,x,y,a;
	    cin>>m>>x>>y;
	    int arr[101];
	    for(int i=0;i<101;i++)
	    {
	        if(i==0)
	            arr[i]=0;
	        else
	            arr[i]=1;
	    }
	    for(int j=0;j<m;j++)
	    {
	        cin>>a;
	        for(int i=max(1,a-(x*y));i<=min(100,a+(x*y));i++)
	            arr[i]=0;
	    }
	    int sum=0;
	    for(int i=0;i<101;i++)
	    {
	        if(arr[i]==1)
	            sum++;
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
