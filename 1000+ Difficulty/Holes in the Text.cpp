//https://www.codechef.com/problems/HOLES
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int ans=0;
	    string s;
	    cin>>s;
	    for(int i=0;i<sizeof(s);i++)
	    {
	        if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='R' || s[i]=='Q')
	            ans++;
	        else if(s[i]=='B')
	            ans+=2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
