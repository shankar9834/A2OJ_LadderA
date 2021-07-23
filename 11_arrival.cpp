#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int h=INT_MAX,hi=0;
    int l=INT_MIN,li=0;
    for(int i=1;i<=n;i++)
    {
          cin>>a[i];
          if(a[i]>l)
          {
              l=a[i];li=i;
          }
          if(a[i]<=h)
          {
              h=a[i];hi=i;
          }
    }
   if(li!=1||hi!=n)
   {
       if(li>hi)
       {
           cout<<abs(li-1)+abs(n-(hi+1))<<endl;

       }
       else{
              cout<<abs(li-1)+abs(n-hi)<<endl;
       }
   }
   else if(li==1&&hi==n)
   {
       cout<<0<<endl;
   }
   else if(li==1){
         cout<<n-hi<<endl;
   }
   else{
       cout<<li-1<<endl;
   }

}
