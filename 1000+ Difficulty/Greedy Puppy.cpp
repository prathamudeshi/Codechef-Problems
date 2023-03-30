//https://www.codechef.com/problems/GDOG
#include <iostream>
using namespace std;

int main() {
	
	int t, n, k, j, max;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    max=0;
	    for(int i=1;i<=k;i++){
	        j=n%i;
	        if(j>max){
	            max=j;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
