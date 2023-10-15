//linear search
#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,4,6,8,10};
	int target=10;
	int n=5;
	bool flag = 0;
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			flag = 1;
			break;
		}
		
	}
	if(flag==1){
	cout<<"the target is present in the array ";
	}
	else{
	cout<<"the target not found";
	}
	return 0;
}
