//https://www.codechef.com/problems/F1RULE
#include <iostream>
using namespace std;

int main() {
	int t;
	float x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    cout<<(x*1.07>=y?"YES":"NO")<<endl;
	}
	return 0;
}
