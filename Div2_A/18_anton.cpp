#include<bits/stdc++.h>
using namespace std;
int main()
{


    string s;
    getline(cin,s);
    
   set<char>st;
    for(int i=0;i<s.length();i++)
    {
            if(s[i]>='a'&&s[i]<='z'){st.insert(s[i]);}
    }
    int ans=st.size();
    cout<<ans<<endl; 
    
}