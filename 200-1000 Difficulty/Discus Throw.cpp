//https://www.codechef.com/problems/DISCUS
#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    cout<<max(a,max(b,c))<<endl;
	}
	return 0;
}
