//printing a rectangle hollow pattern(6) 
#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<=3;i++){
		for(int j=0;j<=5;j++){
			if(i==0 || i==3 || j==0 ||j==5){
				cout<<" * ";
			}
			else{
				cout<<"   ";
			}
		}
		cout<<endl;
	}
	return 0;
}
