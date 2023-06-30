//https://www.codechef.com/problems/PROBCAT
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x<100)
	        cout<<"Easy"<<endl;
	    else if(x>=200)
	        cout<<"Hard"<<endl;
	    else
	        cout<<"Medium"<<endl;
	}
	return 0;
}
