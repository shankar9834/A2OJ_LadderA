#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int crs=n*m;int ct=0;
    if(n==1||m==1)
    {
        cout<<"Akshat\n";
    }
    else
    {
          while(crs!=0)
          {
              n=n-1;
              m=m-1;
              crs=n*m;
              ct++;
               
          }
          if(ct%2==0)
          {
              cout<<"Malvika\n";
          }
          else{
              cout<<"Akshat\n";
          }
    }
}