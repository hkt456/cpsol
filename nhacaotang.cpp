#include <bits/stdc++.h>
using namespace std;
int dX[4]={-1,1,0,0};
int dY[4]={0,0,-1,1};
int m,n;
int arr[1005][1005];
// long long limit=1e3+5;
bool isValid(int y,int x){
    if(y<0||x<0||y>m||x>n) return false;
    return true;
}
bool check(int y,int x){
    // if(arr[y][x]==0) return true;
    int count=0;
    for(int i=0; i<4; i++){
        int newX=x+dX[i], newY=y+dY[i];
        if(isValid(newY,newX)) if(arr[y][x]<arr[newY][newX]) count++;
    }
    if(x==n||y==m) if(count==3) return false;
    else if(x!=n&&y!=m) if(count==4) return false;
    return true;
}
int main(){
    int ans=0;
    // int n,m;
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(!check(i,j)) ans++;
        }
    }
    cout<<ans;
    return 0;
}