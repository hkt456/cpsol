#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000000
int array[maxN], n;
void ReadData(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
}
void Solve(){
    for(int i=n-1; i>=0; i--){
        cout<<array[i]<<" ";
    }
}
int main(){
    freopen("TASK66.inp", "r", stdin);
    freopen("TASK66.out", "w", stdout);
    ReadData();
    Solve();
    return 0;
}