#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int main(){
    int m,n;
    cin>>m>>n;
 int a[m][n];
 for (int i = 0; i < m; i++)
 {
   for (int j = 0; j < n; j++)
   {
    cin>>a[i][j];
   }
 }


   for (int j = n-1; j >=0 ; j--)
    { 
        for (int i = 0; i < m; i++)
       {
          cout<<a[i][j];
       }
       cout<<endl;
   }
 

 

return 0;
}
