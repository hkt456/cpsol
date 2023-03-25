#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000000
int array[maxN];
void ReadData(int n){
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
}
int Solve(int n, int x){
    int count=0;
    for(int i=0; i<n; i++){
        if(array[i]!=0){
            if(x%array[i]==0) count++;
        }
    }
    return count;
}
int main(){
    freopen("MANG01.inp", "r", stdin);
    freopen("MANG01.out", "w", stdout);
    int n, x;
    cin>>n>>x;
    ReadData(n);
    cout<<Solve(n,x);
    return 0;
}