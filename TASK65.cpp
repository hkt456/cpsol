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
int Solve(){
    int Max=-1;
    for(int i=0; i<n; i++){
        if(array[i]>Max && array[i]%2==0) Max=array[i];
    }
    return Max;
}
int main(){
    freopen("TASK65.inp", "r", stdin);
    freopen("TASK65.out", "w", stdout);
    ReadData();
    cout<<Solve();
    return 0;
}