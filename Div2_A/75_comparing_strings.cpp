#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a,b;int hasa[26]={0};int hasb[26]={0};
    cin>>a>>b;int n=a.length(); int ct=0;
  memset(hasa,0,sizeof(hasa));
  memset(hasb,0,sizeof(hasb));
    if(a.length()!=b.length())
    {
        cout<<"NO\n"; return 0;
    }
   
   
    else if(a.length()==b.length())
    {
         for(int i=0;i<n;i++)
        {
       hasa[a[i]-'a']++;
       hasb[b[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(hasa[i]!=hasb[i])
            {
                cout<<"NO\n";return 0;
            }
        }
        for(int i=0;i<n;i++)
        {
           if(a[i]!=b[i])
           {
               ct++;
           }
        }
    }
    if(ct==2)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
 


}