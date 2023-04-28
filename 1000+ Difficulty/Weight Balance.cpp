//https://www.codechef.com/problems/WEIGHTBL
#include <iostream>
using namespace std;

int main() {
	int t,w1,w2,x1,x2,m;
	cin>>t;
	while(t--)
	{
	    cin>>w1>>w2>>x1>>x2>>m;
	    cout<<((((w2-w1)>=x1*m)&&((w2-w1)<=x2*m))?"1":"0")<<endl;
	}
	return 0;
}
