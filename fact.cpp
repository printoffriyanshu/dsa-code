#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while (tt--)
int fact(int n,int a){
    if (n==0)
    {
       return a;
    }
    return fact(n-1,a*n);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n,1);
}
