//https://www.codechef.com/problems/FLOW016
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int gcd=1;
	    int j = min(a,b);
	    for(int i=1;i<=j;i++){
	        if(a%i==0 && b%i==0 ){
	            gcd=i;
	        }
	    }
	    long int lcm=(long int)a/(long int)gcd*b;
	    cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}
