#include <iostream>
#include <math.h>
using namespace std;
double solve(int x, double y)
{
    double S=1/y;
    for(int i=2; i<=x; i++){
        if(i%2==0){
            S+=1/y;
        }
        else{
            S+=y;
        }
    }
    return S;
}
int main(){
    int n;
    double k;
    cin>>n>>k;
    cout<<solve(n, k);
    return 0;
}