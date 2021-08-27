#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int x[n+1];
 for(int i=1;i<=n;i++)
 {
     cin>>x[i];
 }   
 bool flag=false;
 for(int i=1;i<=n-1;i++)
 {
     for(int j=i+2;j<=n-1;j++)
     {
        int x1=min(x[i],x[i+1]);
        int x2=max(x[i],x[i+1]);
        int x3=min(x[j],x[j+1]);
        int x4=max(x[j],x[j+1]);
        if(x1<x3&&x3<x2&&x2<x4&&x1<x4 || x3<x1&&x4<x2&&x1<x4&&x3<x2)
        {
            flag=true;
            break;
        }
        
        
     }
     if(flag==true){
         break;
     }
 }
 if(flag==true)
 {
     cout<<"yes\n";
 }
 else{
     cout<<"no\n";
 }

}