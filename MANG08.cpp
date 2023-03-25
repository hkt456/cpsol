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
    int count=1;
    int Max=1;
    for(int i=0; i<n-1; i++){
        if(array[i]<=array[i+1]){
            count++;
            if(count>Max) Max=count;
        }
        else{
            count=1;
        }
    }
    return Max;
}
int main(){
    freopen("MANG08.inp", "r", stdin);
    freopen("MANG08.out", "w", stdout);
    int Res;
    ReadData();
    cout<<Solve();
    return 0;
}