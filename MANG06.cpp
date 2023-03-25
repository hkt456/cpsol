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
bool Check(int n){
    int m=sqrt(n);
    for(int i=2; i<=m; i++){
        if(n%i==0) return false;
    }
    return true;
}
int Solve(){
    int Max=-1, Res;
    for(int i=0; i<n; i++){
        if(array[i]>Max){
            if(Check(array[i])){
                Max=array[i];
                Res=i;
            }
        }
        if(array[i]==Max) continue; 
    }
    return Res;
}
int main(){
    freopen("MANG06.inp", "r", stdin);
    freopen("MANG06.out", "w", stdout);
    ReadData();
    cout<<Solve();
    return 0;
}