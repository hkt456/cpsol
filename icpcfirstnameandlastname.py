#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int t--){
string s,f,l;
cin>>s>>f>>l;
int lenghtf=f.length(),lengthl=l.length(), block=0;
for(int i=0; i<lengthl;i++){
if(s[i]!=l[i]){
cout<<"NO"<<endl;
block++;
break;
}
}
if(block!=0) cout<<"YES"<<endl;
}
    return 0;
}