// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;
double solve(int num, double powered)
{
    double S=0, i=1, k=1;
    while(i<=num){
        k*=i;
        S=S*powered + 1/k;
        i++;
    }
    return S;
}
int main(){
    int n;
    double x;
    cin>>n>>x;
    cout<<solve(n,x);
    return 0;
}