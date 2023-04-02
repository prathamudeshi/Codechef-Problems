//https://www.codechef.com/problems/MATCHES
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int sum=a+b,ans=0;
	    while (sum>0)
	    {
	        int rem=sum%10;
	        sum/=10;
	        if(rem==0 || rem==6 || rem==9)
	            ans+=6;
	        else if(rem==2 || rem==5 || rem==3)
	            ans+=5;
	        else if(rem==1)
	            ans+=2;
	        else if(rem==4)
	            ans+=4;
	        else if(rem==7)
	            ans+=3;
	        else if(rem==8)
	            ans+=7;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
