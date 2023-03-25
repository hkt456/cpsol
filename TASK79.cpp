#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define maxN 1000000
int array[maxN], n;
void ReadData(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
}
void Cal(int x, int &answer){
    answer=0;
    for(int i=0; i<n; i++){
        answer+=abs(x-array[i]);
    }
}
void Find(int &Min, int &Pos){
    int temp;
    Cal(array[0], Min);
    Pos=0;
    for(int i=1; i<n; i++){
        Cal(array[i], temp);
        if(Min>temp){
            Min=temp;
            Pos=i;
        }
    }
}
void Solve(){
    int MinimumSum, FindingPos, answer=0;
    Find(MinimumSum, FindingPos);
    for(int i=0; i<n; i++){
        answer+=pow((array[FindingPos]-array[i]),2);
    }
    cout<<answer<<"\n"<<FindingPos;
}
int main(){
    freopen("TASK79.inp", "r", stdin);
    freopen("TASK79.out", "w", stdout);
    ReadData();
    Solve();
    return 0;
}