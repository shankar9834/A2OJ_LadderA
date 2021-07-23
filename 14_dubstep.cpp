#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string temp="WUB";int x=0;
int ct=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {  
            i+=2; x++;
            if(i==0&&i==s.length()-3)
            {continue;}
            
            else if(ct!=0&&x==1){
                cout<<" ";x++;
            }
        }
        else{
            cout<<s[i];ct++;x=0;
        }

    }
}