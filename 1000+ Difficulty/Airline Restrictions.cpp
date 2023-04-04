//https://www.codechef.com/problems/AIRLINE
#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d,e;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d>>e;
	    if((a+b<=d && c<=e) || (b+c<=d && a<=e) || (a+c<=d && b<=e))
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}