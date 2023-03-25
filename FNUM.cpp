
#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
void sumOfElements(int n, long long &x){
    x=0;
    int m=sqrt(n);
    for(int i=2; i<=m; i++){
        if(n%i==0) x+=i+n/i;
    }
    if(m*m==n) x-=m;
}
void Solve(long long n){
    long long elementSum, elementSum2;
    if(n<100) cout<<"-1";
    else{
        for(int i=1; i<=n; i++){
        sumOfElements(i, elementSum);
        sumOfElements(elementSum, elementSum2);
        if(elementSum2==i && elementSum>elementSum2 && elementSum<=n) cout<<i<<" "<<elementSum<<"\n";
        }
    }
}
int main(){
    freopen("FNUM.inp", "r", stdin);
    freopen("FNUM.out", "w", stdout);
    long long n;
    cin>>n;
    Solve(n);
    return 0;
}