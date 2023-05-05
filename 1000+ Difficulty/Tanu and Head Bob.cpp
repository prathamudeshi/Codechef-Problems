//https://www.codechef.com/problems/HEADBOB
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int freq[26]={0},n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]-'A']++;
        }
        if(freq['I'-'A']>0)
            cout<<"INDIAN"<<endl;
        else if(freq['Y'-'A']>0)
            cout<<"NOT INDIAN"<<endl;
        else
            cout <<"NOT SURE"<<endl;
    }
}