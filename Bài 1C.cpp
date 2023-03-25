#include <iostream>
#include <math.h>
using namespace std;
double solve(int x)
{
    double k=1, S=0;
    for(int i=1; i<=x; i++){
        k*=i;
        if(i%2==0){
            S-=1/k;
        }
        else{
            S+=1/k;
        }
    }
    return S;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}