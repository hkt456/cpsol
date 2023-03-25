#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, block=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        if(n<=2){
            cout<<"YES"<<endl;
        }
        sort(arr,arr+n);
        for(int i=1; i<n; i++){
            if(arr[i]==arr[i-1]){
                cout<<"NO"<<endl;
                block++;
                break;
            }
        }
        if(block==1) cout<<"YES"<<endl;
    }
    return 0;
}