//https://www.codechef.com/problems/TCKTFINE
#include <iostream>
using namespace std;

int main() {
    int t,x,p,q;
    cin>>t;
    while(t--)
    {
        cin>>x>>p>>q;
        cout<<(p-q)*x<<endl;
    }
	return 0;
}
