//https://www.codechef.com/problems/SNDMAX
#include <iostream>
using namespace std;

int main() {
	int n,a,b,c;
	cin>>n;
	while(n--)
	{
	    cin>>a>>b>>c;
	    cout<<( ( (a>b) && (a<c) ) || ( (a<b) && (a>c) )?a:(( (b>a) && (b<c) ) || ( (b<a) && (b>c) ))?b:c)<<endl;
	}
	return 0;
}
