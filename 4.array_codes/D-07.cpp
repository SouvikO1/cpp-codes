//find the minimum number in an array
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
	int minans = INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i] < minans){
			minans = arr[i];
		}
	}
	cout<<"the smallest value is:"<<minans;
	
	return 0;
}
