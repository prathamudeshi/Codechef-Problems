//https://www.codechef.com/problems/LONGSEQ
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a=0,b=0;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.length();i++)
	    {
	        
	        if(s[i]=='0')
	            a++;
	        else
	            b++;    
	    }
	    if(a==1 || b==1)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}
