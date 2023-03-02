//https://www.codechef.com/problems/LAPIN
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a=1;
    cin>>t;
    while(t--)
    {
        a=1;
        string str;
        cin>>str;
        if(str.length()%2!=0)
        {
            str.erase((str.length()/2),1);
        }
        string s1=str.substr(0,str.length()/2);
        string s2=str.substr(str.length()/2,str.length()/2);
        int freq1[26],freq2[26];
        for(int i=0;i<26;i++)
        {
            freq1[i]=0;
            freq2[i]=0;
        }
        for(int i=0;i<s1.length();i++)
        {
            freq1[s1[i]-'a']++;
        }
        for(int i=0;i<s1.length();i++)
        {
            freq2[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i])
            {
                a=0;
                break;
            }
        }
        cout<<(a?"YES":"NO")<<endl;
    }
}
