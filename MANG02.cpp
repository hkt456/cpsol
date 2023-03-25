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
    int res=abs(array[2]=array[1]);
    for(int i=3; i<n; i++){
        res=min((abs(array[i]-array[i-1])),res);
    }
    return res;
}
int main(){
    freopen("MANG02.inp", "r", stdin);
    freopen("MANG02.out", "w", stdout);
    ReadData();
    cout<<Solve();
    return 0;
}