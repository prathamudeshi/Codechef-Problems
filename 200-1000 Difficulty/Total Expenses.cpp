//https://www.codechef.com/problems/FLOW009?tab=statement
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float x,y;
	    cin>>x>>y;
	    cout<<fixed<<(x>1000?(x*y*0.9):x*y)<<endl;
	}
	return 0;
}
