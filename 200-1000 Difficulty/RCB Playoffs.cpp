//https://www.codechef.com/problems/RCBPLAY
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    cout<<(x+(z*2)>=y?"YES":"NO")<<endl;
	}
	return 0;
}