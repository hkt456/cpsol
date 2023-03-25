#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,int> plli;

const int maxN=1e3;

vector<plli> v;

int n;
ll x;

void readInp(){
    cin>>n>>x;
    for(int i=1;i<=n;++i){
        ll t;cin>>t;
        plli s;s.first=t,s.second=i;
        v.push_back(s);
    }
}

bool cmp(plli m, plli n){
    return(m.first<n.first);
}

int binS(int lo,int hi,ll f){
    int mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(v[mid].first==f)return mid;
        else if(v[mid].first<f)lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}

void solve(){
    sort(v.begin(),v.end(),cmp);
    int pan2=-1,koi1=-1,koi2=-1;
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            ll o=v[i].first+v[j].first-x;
            int pos=-1;
            if(o<v[i].first) pos=binS(0,i-1,o);
            else if(o>v[i].first&&o<v[j].first) pos=binS(i+1,j-1,o);
            else if(o>v[j].first) pos=binS(j+1,n-1,o);
            if(pos>-1&&pan2==-1){
                pan2=v[pos].second;
                koi1=v[i].second;
                koi2=v[j].second;
                break;
            }
        }
    }
    //ans
    if(pan2==-1)cout<<"NO";
    else cout<<pan2<<" "<<koi1<<" "<<koi2;
}

int main(){
    //fast io
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //code here
    readInp();
    solve();
}
