#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<'='<<x<<endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
int binary_expo(int a,int b);
  
void solve()
{
       int t;   
       cin>>t;map<string,int>mp;   
       while(t--)     
          { string s;
          cin>>s;
          mp[s]++;
              

           }

           map<string,int>::iterator it1,it2;
           it1=mp.end();it1--;
           it2=mp.begin();
           if(it1->second>it2->second)
           {
               cout<<it1->first<<endl;
           }
           else{
               cout<<it2->first<<endl;
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