#include <iostream>
#include <math.h>
using namespace std;
double solve(int x)
{
    double S = sqrt(2);
    for(int i=2; i<=x; i++){
        S=sqrt(S+2);
    }
    return S;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}