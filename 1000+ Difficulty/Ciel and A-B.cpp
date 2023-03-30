//https://www.codechef.com/problems/CIELAB
#include <iostream>
using namespace std;

int main() {
	int a,b,n;
	cin>>a>>b;
	int c=(a>b?a-b:b-a);
	n=c%10;
	c/=10;
	(n>=9?n-=1:n+=1);
	cout<<c*10+n;
	return 0;
}
