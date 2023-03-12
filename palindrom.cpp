#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int main()
{
   string s;
   cin>>s;
   int k=s.size()-1;
   int flag=1;
   for (int i = 0; i < s.size()/2+1; i++)
   {
      if (s[i]!=s[k-i])
      {
         flag=0;
         break;
      }
      
   }
   if (flag)
   {
     cout<<"YES\n";
   }
   else
     cout<<"NO\n";
   
   
  
 

   return 0;
}
