//https://www.codechef.com/problems/TWODISH
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b,c;
	    cin>>n>>a>>b>>c;
	    if(b>=n && 2*n<=a+b+c && n<=a+c)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
