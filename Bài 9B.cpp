#include <iostream>
#include <math.h>
using namespace std;
int Solve(int x)
{
    int tmp;
    int number=0;
    while(x>0){
        tmp=x%10;
        number=number*10 + tmp;
        x/=10;
    }
    return number;
}
int main(){
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}