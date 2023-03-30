//https://www.codechef.com/problems/PROGLANG
#include <iostream>
using namespace std;

int main() {
	int t,a,b,a1,b1,a2,b2,one,two;
	cin>>t;
	while(t--)
	{
	    one=0;
	    two=0;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if(a==a1 || a==b1)
	    {
	        one++;
	    }
	    else if(a==a2 || a==b2)
	    {
	        two++;
	    }
	    
	    if(b==b1 || b==a1)
	    {
	        one++;
	    }
	    else if(b==b2 || b==a2)
	    {
	        two++;
	    }
	    
	    if(one>two)
	    {
	        cout<<"1"<<endl;
	    }
	    else if(one<two)
	    {
	        cout<<"2"<<endl;
	    }
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
