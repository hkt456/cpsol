#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
long long Solve(long long x, long long y){
    long long freeDrink=0;
    while(x>=y){
        x=x-y;
        freeDrink++;
        x++;
    }
    return freeDrink;
}
int main(){
    freopen("PROMOTION.inp", "r", stdin);
    freopen("PROMOTION.out", "w", stdout);
    long long n, k;
    cin>>n>>k;
    cout<<Solve(n,k);
    return 0;
}