// https://www.codechef.com/practice/course/2-star-difficulty-problems/DIFF1500/problems/HTMLTAGS

#include <bits/stdc++.h>
using namespace std;

bool valid(char c){
    return ((c>='a' && c<='z') || (c>='0' && c<='9'));
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]!='<' || s[1]!='/' || s[s.size()-1]!='>' || s.size()<=3)
            cout<<"Error"<<endl;
        else{
            for(int i=2;i<s.size()-1;i++){
                if(!valid(s[i])){
                    cout<<"Error"<<endl;
                    break;
                }
                else if(i == s.size()-2)
                    cout<<"Success"<<endl;
            }
            
        }
    }
}
