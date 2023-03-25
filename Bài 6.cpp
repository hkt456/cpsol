#include <iostream>
#include <math.h>
using namespace std;
int solve(int thuaso){
    int x=1, y=1, z;
    if(thuaso>2){
        for(int i=3; i<=thuaso; i++){
            z=y;
            y+=x;
            x=z;
        }
        return y;;
    }
    else{
        y=1;
        return y;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}
