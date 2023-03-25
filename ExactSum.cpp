#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int a[], int low, int high, int key){
	if(low<=high){
		int mid=(low+high)/2;
		if(a[mid]<key){
			return BinarySearch(a, mid+1, high, key);
		}
		if(a[mid]>key){
			return BinarySearch(a, low, mid-1, key);
		}
		if(a[mid]==key) return mid;
	}
	return -1;
}
int main(){
	int N;
	while(cin>>N){
		int a[N+5], balance;
		for(int i =0; i<N; i++){
			cin>>a[i];
		}
		sort(a,a+N);
		cin>>balance;
		for(int i=balance/2; i>0; i--){
			int j=BinarySearch(a, 0, N-1, balance-i);
			if(j!=-1){
				cout<<"Peter should buy books whose prices are "<<a[i]<<" and "<<a[j]<<".\n\n";
				break;
			} 
		}
	}
	return 0;
}