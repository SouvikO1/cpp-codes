//find the maximum number in an array
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
	int n=10;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	int maxans = INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i] > maxans){
			maxans = arr[i];
		}
	}
	cout<<"the biggest value is:"<<maxans;
	
	return 0;
}
