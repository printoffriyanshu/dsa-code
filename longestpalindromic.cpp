#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int lonpal(string s,int n){
    int maxle=1,str=0;
    for (int i = 0; i <n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int flag=1;
           for (int k = 0; k <= (j-i+1)/2; k++)
           {
             if (s[i+k]!=s[j-k])
             {
               flag = 0;
             }
             
           }
           if (flag&&maxle<(j-i+1))
           {
            maxle=j-i+1;
            str=i;
           }
           
           
        }
        
    }
    for (int i = str; i < str+maxle; i++)
    {
       cout<<s[i];
    }
    return maxle;
    
}
int main(){
string s1;
cin>>s1;
int n= s1.size();
cout<<lonpal(s1,n);
return 0;
}