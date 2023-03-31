//https://www.codechef.com/problems/TRICOIN
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a=0,b=0;
	    cin>>n;
	    while(n>a+b)
	    {
	        b++;
	        a+=b;
	    }
	    cout<<b<<endl;
	}
	return 0;
}
