//https://www.codechef.com/problems/EZSPEAK
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	            a=0;
	        else
	            a++;
	        if(a==4)
	            break;
	    }
	    cout<<(a==4?"NO":"YES")<<endl;
	}
	return 0;
}
