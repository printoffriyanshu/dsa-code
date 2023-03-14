#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int egg(int e,int f,vector<vector<int>> &v){
    if (f==0||e==0||f==1)
    {
        return f;
    }
    if (v[e][f]!=-1)
    {
        return v[e][f];
    }
    int min_cost=1e9;
    for (int i = 1; i <=f ; i++)
    {
        int temp=max(egg(e-1,i-1,v),egg(e,f-i,v))+1;
         min_cost=min(temp,min_cost);
    }
    return v[e][f]=min_cost;
}
int main(){
   int n,e;
   cin>>n>>e;
   vector<vector<int>> v(e+1,vector<int>(n+1,-1));
   cout<<egg(e,n,v);
   return 0;
}
