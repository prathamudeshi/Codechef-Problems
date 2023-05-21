//https://www.codechef.com/problems/HOLES?tab=statement
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
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='A' || s[i]=='R' || s[i]=='P' || s[i]=='O' || s[i]=='D' || s[i]=='Q')
	            ans++;
	        else if(s[i]=='B')
	            ans+=2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
