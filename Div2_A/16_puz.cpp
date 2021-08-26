#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    int ct=0;
  
    int a[m];
    bool flag=0;  
    multiset<int>ms;int cn=0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        

        
    }
    for(int i=0;i<m;i++)
    {
        if(a[i]==a[i+1]&&i!=m-1)
        {cn=a[i];ct++;
            flag=1;
        }

    }


if(flag==1&&ct==n)
{
    cout<<0<<endl;
    //cout<<cn<<endl;
    }

else {   
    for(int i=0;i<m;i++)
    {
        ms.insert(a[i]);
    }
    
    
     multiset<int>::iterator it;
    it=ms.begin();
    int min=*it;
    for(int i=0;i<n-1;i++)
    {
        it++;
    }
    int max=*it;
   cout<<max-min<<endl;
  cout<<max<<" "<<min<<endl;
}
}