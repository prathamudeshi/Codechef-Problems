//https://www.codechef.com/problems/COURSEREG
#include <iostream>
using namespace std;

int main() {
	int t,n,m,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m>>k;
	    cout<<(m-n-k>=0?"YES":"NO")<<endl;
	}
	return 0;
}
