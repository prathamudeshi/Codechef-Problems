//https://www.codechef.com/problems/MINHEIGHT
#include <iostream>
using namespace std;

int main() {
	int t,x,h;
	cin>>t;
	while(t--)
	{
	    cin>>x>>h;
	    cout<<(x>=h?"YES":"NO")<<endl;
	}
	return 0;
}
