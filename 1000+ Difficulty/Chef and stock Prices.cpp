//https://www.codechef.com/problems/CSTOCK
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    float s,c;
	    cin>>s>>a>>b>>c;
	    if(c<0)
	        c=c*(-1);
	    if((s+(s*(c/100.0)))<=b && (s+(s*(c/100.0)))>=a)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}