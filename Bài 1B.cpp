#include <iostream>
#include <math.h>
using namespace std;
double solve(int x)
{
    double S=0;
    for(double i=1; i<=x; i++)
    { 
        S=S+(i-1)/i;
    }
    return S;
}
int main() {
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}