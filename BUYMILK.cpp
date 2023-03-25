#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
typedef long long ll;
ll Solve(ll price, ll requirement, ll budget){
    ll cartons=budget/price;
    cartons+=cartons/requirement;
    return cartons;
}
int main(){
    freopen("BUYMILK.inp", "r", stdin);
    freopen("BUYMILK.out", "w", stdout);
    ll a,n,C;
    cin>>a>>n>>C;
    cout<<Solve(a,n,C);
    return 0;
}