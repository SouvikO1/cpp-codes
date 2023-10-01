//write a program to check if the input is positive or negative(2)
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the number:";
	cin>>num;
	if(num>0){
		cout<<"its a positive number";
	}
	else if(num<0){
		cout<<"its a negative number:";
	}
	else{
		cout<<"the number is zero";
	}
	return 0;

}
