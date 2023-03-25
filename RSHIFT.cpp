// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
typedef long long ll;
ll Solve(ll x){
    ll k=0, ans=x, y=x, p=1;
    while(y>10){
        k++;
        y/=10;
    }
    for(int i=1; i<=k;i++){
        p*=10;
    }
    for(int i=1; i<k; i++){
        if(x%10==0) p/=10;
        x=(x%10)*p+x/10;
        ans=max(ans,x);
    }
    return ans;
}
int main(){
    freopen("RSHIFT.inp", "r", stdin);
    freopen("RSHIFT.out", "w", stdout);
    ll n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}