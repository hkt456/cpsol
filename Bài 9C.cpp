#include <iostream>
#include <math.h>
using namespace std;
int Solve(int x){
    int sum=0;
    int number1=x%10, number2;
    while(x>0){
        number2=x%10;
        sum+=abs(number1-number2);
        number1=number2;
        x/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}