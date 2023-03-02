//Codechef Problem Code :- AGELIMIT
#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	int age;
	while(t--)
	{
	    cin>>x>>y>>age;
	    if(age>=x && age<y)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {cout<<"NO"<<endl;}
	}
	return 0;
}
