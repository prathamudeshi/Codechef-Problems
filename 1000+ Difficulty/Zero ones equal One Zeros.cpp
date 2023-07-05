//https://www.codechef.com/problems/ZOOZ?tab=statement
#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin>>n;
    int arr[n]={0};
    arr[1]=1;
    arr[n-2]=1;
    for(int i=0;i<n;i++)
        cout<<arr[i];
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
}