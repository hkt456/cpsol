#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
typedef long long ll;
ll Solve(ll x){
    ll cost=0;
    if(x>400){
        cost+=(x-400)*20;
        x=400;
    }
    if(x>300){
        cost+=(x-300)*18;
        x=300;
    }
    if(x>200){
        cost+=(x-200)*17;
        x=200;
    }
    if(x>100){
        cost+=(x-100)*16;
        x=100;
    }
    if(x>50){
        cost+=(x-50)*15;
    }
    cost+=50*14;
    return cost;
}
int main(){
    freopen("BILL.inp", "r", stdin);
    freopen("BILL.out", "w", stdout);
    ll n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}