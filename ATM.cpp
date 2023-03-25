
#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int Solve(int a, int b, int c, int n){
    int count=0;
    for(int i=min(c,n/20); i>=0; --i){
        for(int j=min(b, (n-20*i)/10); j>=0; --j){
            if(a*5>=n-20*i-10*j && (n-20*i-10*j)%5==0){
                count++;
            }
        }
    }
    return count;
}
int main(){
    freopen("ATM.inp","r", stdin);
    freopen("ATM.out", "w", stdout);
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    cout<<Solve(a,b,c,n);
    return 0;
}