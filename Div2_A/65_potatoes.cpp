#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,k,n,x;
    vector<int>ans;
    cin>>y>>k>>n;
    if(y>=n || n<k )
    {
        cout<<-1<<endl;return 0;
    }
    else if(y<=k)
    { if(y==k){x=2*k-y;}
    else{x=k-y;}
        
        ans.push_back(x);
        while(x+y<=n)
        {
            x=x+k;
            ans.push_back(x);

        }
        ans.pop_back();

    }
    else if(y>k)
    {
         int rem=y%k;
         x=k-rem;
         ans.push_back(x);
         while(x+y<=n)
         {
             x=x+k;
             ans.push_back(x);
         }
         ans.pop_back();
    }
   if(ans.size()==0)
   {
       cout<<-1<<endl;return 0;
   }
    for(auto k:ans)
    {
        cout<<k<<" ";
    }

}