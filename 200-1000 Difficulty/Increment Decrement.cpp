//https://www.codechef.com/problems/DECINC
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%4==0)
	{
	    n++;
	}
	else
	n--;
	cout<<n;
	return 0;
}
