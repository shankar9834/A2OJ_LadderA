#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
int rem(int n)
{
    int res=0;int i=0;
    while(n>0)
    {
          if(n%10!=0)
          {
              res=res+(n%10)*pow(10,i);
              i++;
          }
          n=n/10;


    }
    return res;
}
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    a=rem(a);
    b=rem(b);
    c=rem(c);
    if(a+b==c)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }






    }