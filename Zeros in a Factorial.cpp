//https://www.codechef.com/problems/FCTRL
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int count=0;
	  while(n>0)
	  {
	    n=n/5;
	    count+=n;
	  }cout<<count<<endl;
	}
	return 0;
}
