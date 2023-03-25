#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie()->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mid=n/2;
        if(n%2!=0){
            mid++;
            int i=mid, j=n;
            while(i>0&&j>mid){
                cout<<i<<" "<<j<<" ";
                i--;
                j--;
            }
            cout<<1;
        }
        else{
            int i=mid,j=n;
            while(i>0&&j>mid){
                cout<<i<<" "<<j<<" ";
                i--;
                j--;
            }
        }
        cout<<endl;
    }
    return 0;
}