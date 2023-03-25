#include <iostream>
#include <math.h>
using namespace std;
int solve(int x){
    int S=1, k=0;
    if(x==1){
        return 1;
    }
    for(int i=2; i<=x; i++){
        k=i*S;
        S+=k;
    }
    if(x!=1){
        return k;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}
