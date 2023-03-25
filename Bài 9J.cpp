#include <iostream>
#include <math.h>
using namespace std;
void Solve(int x, int &Max, int &count){
    int a;
    Max=0, count=0;
    while(x!=0){
        a=x%10;
        if(a>=Max){
            if(a>Max){
                Max=a;
                count=1;
            }
            else{
                count++;
            }
        }
        x/=10;
    }
}
 int main(){
        int n, y, z;
        cin>>n;
        Solve(n,y,z);
        cout<<y<<endl<<z;
        return 0;
 }
    
