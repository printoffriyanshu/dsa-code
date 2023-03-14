#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
void tower_of_hanoi(int n,char A,char C,char B){
    if (n==0)
    {
        return;
    }
    tower_of_hanoi(n-1,A,B,C);
    cout<<n<<" MOVE FROM "<<A<<" TO "<<B<<endl;
    tower_of_hanoi(n-1,C,A,B);

    
} 
int main(){
int n;
cin>>n;
tower_of_hanoi(n,'A','C','B');

return 0;
}
