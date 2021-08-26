#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    int arr[4];
    char ar[4]={'A','B','C','D'};
    int a1=a.length()-2;
    int a2=b.length()-2;
    int a3=c.length()-2;
    int a4=d.length()-2;
     arr[0]=a.length()-2;
     arr[1]=b.length()-2;
     arr[2]=c.length()-2;
      arr[3]=d.length()-2;
     // sort(arr,arr+4);
      int cnt=0;vector<int>ans;
      for(int i=0;i<4;i++)
      {cnt=0;
          for(int j=0;j<4;j++)
          {
            if(arr[i]>=arr[j]*2) cnt++;
            else if(arr[j]>=arr[i]*2) cnt--;
          }
          if(cnt==3||cnt==-3)
          {
              ans.push_back(i);
          }
          
      }
      if(ans.size()==1)
      { 
          cout<<ar[ans[0]]<<endl;
          
      }
      else{
          cout<<"C"<<endl;
      }
     

      /*  for(auto k:arr)
      {
          cout<<k<<endl;
      }  */
      // cout<<"arr[3]"<<" "<<arr[3]<<endl;
    /*   if(arr[0]==arr[1]&&arr[3]<2*arr[2])
      {
          cout<<"C"<<endl;
      }
    
      else if(arr[3]>=2*arr[2])
      {
           if(arr[3]==a1)
           {
               cout<<"A"<<endl;
           }
           else if(arr[3]==a2)
           {
               cout<<"B"<<endl;
           }       
           else if(arr[3]==a3)
           {
               cout<<"C"<<endl;
           }
           else
               cout<<"D"<<endl;
          
      }
      else if(arr[0]<=arr[1]/2)
      {
           if(arr[0]==a1)
           {
               cout<<"A"<<endl;
           }
           else if(arr[0]==a2)
           {
               cout<<"B"<<endl;
           }       
           else if(arr[0]==a3)
           {
               cout<<"C"<<endl;
           }
           else
               cout<<"D"<<endl;
           
      }
      else{
          cout<<"C"<<endl;
      } */


}