//https://www.codechef.com/problems/CSTOCK
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int s,a,b,c;
	    cin>>s>>a>>b>>c;
	    if(c<0)
	        c=c*(-1);
	    if((s+(c*s/100))<=b && (s-(c*s/100))>=a)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
