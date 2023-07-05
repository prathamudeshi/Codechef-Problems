//https://www.codechef.com/problems/ERROR?tab=statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n=0;
	    string s;
	    cin>>s;
	    string s1="010";
	    string s2="101";
	    if((s.find(s1) != string::npos) || (s.find(s2) != string::npos))
	        cout<<"Good"<<endl;
	    else
	        cout<<"Bad"<<endl;
	}
	return 0;
}
