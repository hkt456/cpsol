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
void Solve(){
    for(int i=0; i<=l-2; ++i){
        cout<<array[i]<<" ";
    }
    for(int i=r-1; i>=l-1; --i){
        cout<<array[i]<<" ";
    }
    for(int i=r; i<=n-1; ++i){
        cout<<array[i]<<" ";
    }
}
int main(){
    freopen("TASK73.inp", "r", stdin);
    freopen("TASK73.out", "w", stdout);
    ReadData();
    Solve();
    return 0;
}