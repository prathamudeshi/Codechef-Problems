//https://www.codechef.com/problems/PALL01
#include <iostream>
using namespace std;

int main() {
	int t,n,rev,i=1;
	cin>>t;
	while(t--)
	{
	    rev=0;
	    cin>>n;
	    int og=n;
	    while(n>0)
	    {
	        i=n%10;
	        rev=rev*10+i;
	        n/=10;
	    }
	    cout<<(og==rev ? "wins" : "loses" )<<endl;
	}
	return 0;
}
