#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int main()
{
   string s1,s2;
   cin>>s1>>s2;
   map<char,char> m;
   int m1=1;
   if (s1.size()!=s2.size())
   {
      cout<<"NOT ISOMORPHIC\n";
   }
   else
   {
      for (int i = 0; i < s1.size(); i++)
      {
         if (m.find(s1[i])==m.end())
         {
            m[s1[i]]=s2[i];
         }
         else
         {
            if (m[s1[i]]!=s2[i])
            {
               m1=0;
               break;
            }
            
         }
         
      }
      if(m1)
      {
         cout<<"yes\n";
      }
      else
      cout<<"no\n";
      
      
   }
   return 0;
}
