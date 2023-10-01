//print all the even num btw 1-100(3)
#include<iostream>
using namespace std;
int main(){
	
	for(int i=1;i<=100;i++){
		if(i%2==0){
			cout<<"even number ="<<i<<endl;
		}
		else{
			continue;
		}
	}
	return 0;
}
