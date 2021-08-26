#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<'='<<x<<endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
#define ll long long
void solve()
{
   int n;
   cin>>n;
   int a[n];int a0=0,a11=0,a12=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==0) a0++;
       if(a[i]>0) a12++;
       if(a[i]<0) a11++;

    
           
       
   }
  /*  deb(a0);
   deb(a12);
   deb(a11);
    */
   set<int>neg;
   set<int>pos;int ct0=0,ctp=0,ctn=0;
   set<int>zer;bool fl=0;
   if(a11%2!=0){bool flag=0;
           if(a0>0)
           {
               for(int i=0;i<n;i++)
               {
                   if(a[i]<0&&flag==0)
                   {
                       neg.insert(a[i]);flag=1;ctn++;a11--;
                   }
                    else if(a[i]>0||a[i]<0){
                       pos.insert(a[i]);ctp++;
                   }
                   else if(a[i]==0){
                       zer.insert(a[i]);ct0++;
                   }
                  
               }
           }
           else{
               for(int i=0;i<n;i++){
                    if(a[i]<0&&flag==0)
               {
                   neg.insert(a[i]);flag=1;ctn++;
               }
               else {
                   pos.insert(a[i]);ctp++;
               }
               }
              
           }
   }
   else if(a11%2==0)
   {bool flag=0;bool flag2=0;
             if(a0>0)
             {
                 for(int i=0;i<n;i++)
                 {
                     if(a[i]==0){zer.insert(a[i]);ct0++;}
                     if(a[i]<0&&flag==0)
                     {
                         neg.insert(a[i]);flag=1;ctn++;
                     }
                     else if(a[i]<0&&flag2==0)
                     {
                         zer.insert(a[i]);ct0++;flag2=1;
                     }
                     else if(a[i]!=0)
                     {
                         pos.insert(a[i]);ctp++;
                     }
                 }
             }
             else{
                ctp=n;
                cout<<ct0<<endl;
                cout<<n<<" ";fl=1;
                for(int i=0;i<n;i++)
                {
                      cout<<a[i]<<" ";
                }
                cout<<endl;
                cout<<ctn<<endl;
             }
   }
   if(fl==0)
   {
       cout<<ctn<<" ";
       for(auto &s:neg)
       {
           cout<<s<<" ";
       }
       cout<<endl;
       cout<<ctp<<" ";
       for(auto &k:pos)
       {
           cout<<k<<" ";
       }
       cout<<endl;
       cout<<ct0<<" ";
       for(auto &m:zer)
       {
           cout<<m<<" ";
       }
       cout<<endl;

   }
 
   

} 
int main()
{
//fastio();
 #ifndef ONLINE_JUDGE
freopen( "input.txt"    ,"r"  ,stdin);
freopen(  "output.txt"   , "w"  ,stdout);
#endif 
solve();
return 0;
}