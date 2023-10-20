//print an extream print of an array 
//ex: {10,20,30,40,50,60}
//{10,60,20,50,30,40}
#include<iostream>
using namespace std;

void extream_print(int arr[],int size){
	int left=0;
	int right=size-1;
	while(left<=right){
		if(left==right){
			cout<<arr[left];
		}
		else{
			cout<<arr[left]<<" ";
			
			cout<<arr[right]<<" ";
			
		}
		left++;
		right--;
	}
}
int main(){
	int arr[7]={10,20,30,40,50,60,70};
	int size=7;
	extream_print(arr,size);
}
