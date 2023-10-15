// using linear search using function
#include <iostream>
using namespace std;

bool find_array(int arr[],int size,int target){
	for(int i=0;i<size;i++){
		if(arr[i]==target){
			return true; 
		}
	}
}
int main(){
	
	int arr[5]={2,4,6,8,10};
	int size=5;
	int target=10;
	int find=find_array(arr,size,target);
	if(find==1){
		cout<<"the targe array is found";
	}
	else{
		cout<<"the target array is not found";
	}
	return 0;
}
