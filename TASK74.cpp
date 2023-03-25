#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000000
int array[maxN], n, l, r;
void ReadData(){
    cin>>n>>l>>r;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
}
int Solve(){
    int Min=array[l];
    for(int i=r; i>l; i--){
        if(Min>array[i]) Min=array[i];
    }
    return Min;
}
int main(){
    freopen("TASK74.inp", "r", stdin);
    freopen("TASK74.out", "w", stdout);
    ReadData();
    cout<<Solve();
    return 0;
}