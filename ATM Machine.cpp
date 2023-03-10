//https://www.codechef.com/problems/ATM2
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    while(n--)
	    {
	        int a;
	        cin>>a;
	        if(k-a>=0)
	        {
	            cout<<"1";
	            k-=a;
	        }
	        else
	        cout<<"0";
	    }
	    cout<<endl;
	}
	return 0;
}
