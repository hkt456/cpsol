#include <iostream>
#include <math.h>
using namespace std;
double solve(int y, double z)
{
    double S=0, k=1, Exp=1;
    for(int i=1; i<=y; i++){
        k*=i;
        Exp*=z;
        if(i%2!=0){
            S=S+(Exp/k);
        }
        else{
            S=S-(Exp/k);
        }
    }
    return S;
}
int main(){
    int n;
    double x;
    cin>>n>>x;
    cout<<solve(n, x);                
    return 0;
}