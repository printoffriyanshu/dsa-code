#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int main()
{
   string s;
   cin>>s;
   string str[]
        = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
   string out="";
   for (int i = 0; i < s.size()/2+1; i++)
   {
      if (s[i]==' ')
      {
         out=out+"0";
      }
      else{
         int po=s[i]-'A';
         out=out+str[po];
      }
      
   }
   cout<<out<<endl;
   
   
   
  
 

   return 0;
}
