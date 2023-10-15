// make a 5 size array by taking user inout then find the sum of all of it
#include <iostream>
using namespace std;
int main(){
	
	int n=5;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl<<endl;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	cout<<"the sum is:"<<sum;
	
	return 0;
}
