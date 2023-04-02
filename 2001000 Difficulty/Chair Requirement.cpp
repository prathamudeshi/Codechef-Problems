//https://www.codechef.com/problems/CHAIRS_
#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
        cin>>x>>y;
        cout<<(x>y?x-y:0)<<endl;
	}
	return 0;
}
