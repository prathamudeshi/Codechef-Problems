//https://www.codechef.com/problems/VDATES
#include <iostream>
using namespace std;

int main() {
	int t,d,l,r;
	cin>>t;
	while(t--)
	{
	    cin>>d>>l>>r;
	    if(l<=d && d<=r)
	        cout<<"Take second dose now"<<endl;
	    else if(d<l)
	        cout<<"Too Early"<<endl;
	    else 
	        cout<<"Too Late"<<endl;
	}
	return 0;
}
