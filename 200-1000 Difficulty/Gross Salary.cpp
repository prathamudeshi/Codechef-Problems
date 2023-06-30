//https://www.codechef.com/problems/FLOW011
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,hra,da,ans;
	    cin>>x;
	    if(x<1500)
	        cout<<fixed<<2*x<<endl;
	    else
	        cout<<fixed<<(1.98*x)+500<<endl;
	}
	return 0;
}
