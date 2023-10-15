// count the 0's and 1's in an array 
#include <iostream>
using namespace std;

int main(){
	
	int n=10;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	int zero=0;
	int one=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			one++;
		}
		else{
			zero++;
		}
	}
	cout<<"the number of one's:"<<one<<endl;
	cout<<"the number of zero's:"<<zero;
	
	return 0;
}
