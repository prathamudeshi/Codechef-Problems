//https://www.codechef.com/problems/TAXES
#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    cout<<(x>100?x-10:x)<<endl;
	}
	return 0;
}
