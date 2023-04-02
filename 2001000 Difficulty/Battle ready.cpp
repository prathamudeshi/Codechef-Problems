//Codechef Problem Code :- AMR15A
#include <iostream>
using namespace std;

int main() {
	int n,t,a=0,b=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n%2==0)
	    {
	        a++;
	    }
	    else
	    b++;
	}
	if(a>b)
	cout<<"READY FOR BATTLE"<<endl;
	else
	cout<<"NOT READY"<<endl;
	return 0;
}
