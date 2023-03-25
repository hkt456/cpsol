#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int Solve(int minutePrice, int blockPrice, int time ){
    int price, minutes=0, blocks=1, x;
    minutes=time/60;
    x=time-60*minutes;
    blocks+=x/6;
    if(x%6==0){
        blocks-=1;
    }
    price=minutes*minutePrice + blocks*blockPrice;
    return price;
}
int main(){
    freopen("MOBILE.inp", "r", stdin);
    freopen("MOBILE.out", "w", stdout);
    int p,t,n;
    cin>>p>>t>>n;
    cout<<Solve(p,t,n);
    return 0;
}
