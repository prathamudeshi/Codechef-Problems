// https://www.codechef.com/START177C/problems/TRICHECK

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
