#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int Solve(int neededExp){
    int expEarned=0, level=0;
    for(int i=1; expEarned<neededExp; i++){
        expEarned+=i;
        level++;
    }
    return level;
}
int main(){
    freopen("GAMER.inp", "r", stdin);
    freopen("GAMER.out", "w", stdout);
    int n;
    cin>>n;
    cout<<Solve(n);
    return 0;
}