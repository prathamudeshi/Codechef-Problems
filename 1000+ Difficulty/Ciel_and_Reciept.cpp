// https://www.codechef.com/practice/course/bit-manipulation/BITMF/problems/CIELRCPT

//Explanation:- https://www.codechef.com/viewsolution/1124038177

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n, count = 0, mul = 1, k=0;
        cin>>n;
        while(n>0){
            if(k>11)
                mul *= 2;
            count += mul*(n&1);
            n >>= 1;
            k++;
        }
        cout<<count<<endl;
    }
}
