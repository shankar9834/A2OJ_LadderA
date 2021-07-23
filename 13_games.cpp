#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
  int l=v.size();int ct=0;
  for(int i=0;i<l;i++)
  {
      for(int j=0;j<l;j++)
      {
          if(v[i].first==v[j].second)
          {
              ct++;
          }

      }
  }

  cout<<ct<<endl;
}
//1+