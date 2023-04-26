//https://www.codechef.com/problems/OLYRANK
#include <iostream>
using namespace std;

int main() {
	int t,g1,s1,b1,g2,s2,b2;
	cin>>t;
	while(t--)
	{
	    cin>>g1>>s1>>b1>>g2>>s2>>b2;
	    if((g1+s1+b1)>(g2+s2+b2))
	        cout<<"1"<<endl;
	    else 
	        cout<<"2"<<endl;
	}
	return 0;
}
