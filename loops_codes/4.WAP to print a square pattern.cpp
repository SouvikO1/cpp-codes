//printing a square pattern(4) 
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of rows:";
	cin>>n;
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++){
			cout<<" *  ";
		}
		cout<<endl<<endl;
	}
	return 0;
}
