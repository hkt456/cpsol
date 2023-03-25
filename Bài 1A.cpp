#include <iostream>
#include <math.h>
using namespace std;
double solve(int x){
    double S=0;
    for(int i=0; i<=x; i++){
        S = S + sqrt(i);
    }
    return S;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}