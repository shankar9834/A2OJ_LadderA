#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;int as1=0,as2=0,as3=0;
    while(n--)
    {
        cin>>a>>b>>c;
        as1+=a;
        as2+=b;
        as3+=c;

    }

    if(as1==0&&as2==0&&as3==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}