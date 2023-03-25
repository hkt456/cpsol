#include <iostream>
#include <math.h>
using namespace std;
bool solve(int x) 
{
    int newn=0,tmp=x;
    while(x!=0){
        newn=newn*10 + x%10;
        x/=10;
    }
    return(newn==tmp);
}
int main()
{
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}