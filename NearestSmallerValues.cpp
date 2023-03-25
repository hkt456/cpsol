#include <iostream>
#include <stack>
#define maxN 200005
using namespace std;
int n, a[maxN];
stack <int> mystack;
int main(){
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	mystack.push(0);
	for(int i=1; i<=n; i++){
		while(!mystack.empty()){
			int position=mystack.top();
			if(a[position]>=a[i]){
				mystack.pop();
			}
			else{
				cout<<position<<" ";
				break;
			}
		}
		mystack.push(i);
	}
	return 0;
}
