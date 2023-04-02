//https://www.codechef.com/problems/PRB01
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	bool a=1;
	cin>>t;
	while(t--)
	{
	    a=true;
	    cin>>n;
	    for(int i=2;i<n;i++)
	    {
	        if(n%i==0)
	        {
	            a=false;
	            break;
	        }
	    }
	    cout<<(a?"yes":"no")<<endl;
	}
	return 0;
}
