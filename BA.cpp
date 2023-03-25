#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0, j=s.size()-1, ans=-1;
    while(i<j){
        ans=max(max(ans,s[i]-'0'),s[j]-'0');
        if(ans==9){
            cout<<ans;
            return 0;
        }
        i++;
        j--;
    }
    cout<<ans;
    return 0;
}
