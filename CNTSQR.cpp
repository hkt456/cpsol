#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
typedef long long ll;
ll Solve(ll x, ll y){
    ll numberOfSquares =0, smallerSide=min(x,y);
    for(int i=1; i<=smallerSide; i++){
        numberOfSquares+=(x-i+1)*(y-i+1);
    }
    return numberOfSquares;
}
int main(){
    freopen("CNTSQR.inp", "r", stdin);
    freopen("CNTSQR.out", "w", stdout);
    ll n,m;
    cin>>n>>m;
    cout<<Solve(n,m);
    return 0;
}