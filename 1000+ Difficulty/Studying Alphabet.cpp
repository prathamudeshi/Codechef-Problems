//https://www.codechef.com/problems/ALPHABET
#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	int freq1[26];
	for(int i=0;i<26;i++)
	    freq1[i]=0;
	for(int i=0;i<s.size();i++)
	    freq1[s[i]-'a']++;
	int n;
	cin>>n;
	while(n--)
	{
	    bool ans=true;
	    string a;
	    cin>>a;
	    for(int i=0;i<a.size();i++)
	    {
	        if(freq1[a[i]-'a']==0)
	        {
	            ans=false;
	            break;
	        }
	    }
	    cout<<(ans?"Yes":"No")<<endl;
	}
	return 0;
}
