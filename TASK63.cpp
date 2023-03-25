#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000000
int array[maxN], n, x;
void ReadData(){
    cin>>n>>x;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
}
int Solve(int num){
    int count=0;
    for(int i=0; i<n; i++){
        if(array[i]==num) count++;
    }
    return count;
}
int main(){
    freopen("TASK63.inp", "r", stdin);
    freopen("TASK63.out", "w", stdout);
    ReadData();
    cout<<Solve(x);
    return 0;
}