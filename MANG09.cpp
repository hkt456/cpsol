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
int Check(int n){
    int flag, m=sqrt(n);
    if(m*m==n) flag=1;
    else flag=0;
    return flag;
}
int Solve(){
    int count=0;
    int Max=1, a;
    for(int i=0; i<n-1; i++){
        a=Check(array[i]);
        if(a==1){
            count++;
            if(count>Max) Max=count;
        }
        else count=0;
    }
    return Max;
}
int main(){
    freopen("MANG09.inp", "r", stdin);
    freopen("MANG09.out", "w", stdout);
    int Res;
    ReadData();
    cout<<Solve();
    return 0;
}