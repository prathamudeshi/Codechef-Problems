//Codechef Problem Code :- PRACTICEPERF
#include <iostream>
using namespace std;

int main() {
	int ans=0,arr[4];
	for(int i=0;i<4;i++)
	{
	    cin>>arr[i];
	    if(arr[i]>=10)
	    ans++;
	}
	cout<<ans;
	
	return 0;
	
}
