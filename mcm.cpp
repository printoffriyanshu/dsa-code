#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int sol(int a[],int i,int j){
  if (i>=j)
  {
    return 0;
  }
  
  int min_cost=INT_MAX;
   for (int k = i; k <=j-1; k++)
   {
    int temp=sol(a,i,k)+sol(a,k+1,j)+(a[j]*a[i-1]*a[k]);
    min_cost=min(min_cost,temp);
   }
   
   return min_cost;
}
int main(){

  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  cout<<sol(a,1,n-1);
  

return 0;
}
