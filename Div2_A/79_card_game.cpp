#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<'='<<x<<endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int binary_expo(int a,int b);
  
void solve()
{
      char m;
      cin>>m;
      map<char,int>mp;
      mp['6']=1;
      mp['7']=2;
      mp['8']=3;
      mp['9']=4;
      mp['T']=5;
      mp['J']=6;
      mp['Q']=7;
      mp['K']=8;
      mp['A']=9;
      string s1;
      cin>>s1;
      string s2;
      cin>>s2;
      if(s1[1]==s2[1])
      {
          if(mp[s1[0]]>mp[s2[0]])
          {
              cout<<"YES\n"; return ;
          }
          else{
              cout<<"NO\n";return ;
          }

      }
      else if(s1[1]==m)
      {
          cout<<"YES\n";return ;
      }
      else{
          cout<<"NO\n";
      }


} 
 
int main()
{
 
fastio();
/* #ifndef ONLINE_JUDGE
freopen(     ,  ,stdin);
freopen(     ,   ,stdout);
#endif */
 
solve();
return 0;
 
}
 
 int binary_expo(int a,int b)
{
     int result=1;  
   while(b>0){             
     if(b%2!=0){   result=result*a;  }           
        a=a*a;      
         b=b/2;  
          } 
return result; 
}