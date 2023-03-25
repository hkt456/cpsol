#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
void Calc(int x, int y){
    int o=0, s=0, s2=0,ans=x;
    double z=0;
    while(x>0){
        s+=x%10;
        x/=10;
        o+=1;
        if(o==y/2) s2=s;
    }
    z=s;
    if(z/2==s2) cout<<ans<<"\n";
}
void solve(int n){
    int k=1, block=9,i=1;
    while(i<=n){
        if(k%2==0){
            Calc(i,k);
        }
        if(i%block==0){
            k+=1;
            block=block*10+9;
        }
        i+=1;
    }
}
int main(){
    int n;    
    freopen("HNUM.inp", "r", stdin);
    freopen("HNUM.out", "w", stdout);
    cin>>n;
    solve(n);
    return 0;
}
