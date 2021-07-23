 /***
solved  
***/
 
  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
      string s;cin>>s;
      string t;int counth=0,counte=0,countl=0,counto=0;
      for(int i=0;i<s.length();i++)
      {
          if(s[i]=='h'&&counth<1&&counto==0&&counte==0&&countl==0){counth++;t=t+s[i];
              
          }
          if(s[i]=='e'&&counte<1&&counth==1&&counto==0&&countl==0){
              counte++;t=t+s[i];
          }
          if(s[i]=='l'&&countl<2&&counth==1&&counte==1)
          {countl++;
          t=t+s[i];

          }
          if(s[i]=='o'&&counto<1&&counth==1&&countl==2&&counte==1){
              counto++;
              t=t+s[i];break;
          }


      }
   if(t=="hello"){cout<<"YES\n";}
   else{cout<<"NO\n";}
  }