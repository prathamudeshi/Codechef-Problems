//https://www.codechef.com/problems/COCONUT
#include <iostream>
using namespace std;

int main() {
	int t,x1,x2,x3,x4;
	cin>>t;
	while(t--)
	{
	    cin>>x1>>x2>>x3>>x4;
	    int a1,a2;
	    a1=x3/x1;
	    a2=x4/x2;
	    cout<<a1+a2<<endl;
	    
	}
	return 0;
}
