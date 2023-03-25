#include <bits/stdc++.h>
using namespace std;
//lskdjflsjdflmsfjwoflklfkjwelfj
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int n,x,y,z;
        cin>>n;
        int ans=0,temp=1,num=10;
        if(n>9) ans+=9;
        else{
            ans=n;
            temp=0;
        }
        if(temp){
            while(n/num){
                if(n/(num*10)==0){
                    ans=ans+n/num;
                }
                else{
                    ans=ans+9;
                }
                num=num*10;
            }
        }
        cout<<ans<<endl;
    }
}