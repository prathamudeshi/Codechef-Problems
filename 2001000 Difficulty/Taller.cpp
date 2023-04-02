//https://www.codechef.com/problems/TALLER
#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    cout<<(x-y>0?"A":"B")<<endl;
	}
	return 0;
}
