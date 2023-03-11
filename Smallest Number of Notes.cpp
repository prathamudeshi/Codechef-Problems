//https://www.codechef.com/problems/FLOW005
#include <iostream>
using namespace std;

int main() {
	int t,n,a=0,b=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    while(n!=0)
	    {
	        a=n/100;
	        n%=100;
	        
	        a=a+n/50;
	        n%=50;
	        
	        a=a+n/10;
	        n%=10;
	        
	        a=a+n/5;
	        n%=5;
	        
	        a=a+n/2;
	        n%=2;
	        
	        a=a+n;
	        break;
	    }
	    cout<<a<<endl;
	}
	return 0;
}
