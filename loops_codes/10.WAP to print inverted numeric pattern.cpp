//printing a inverted numeric pattern(10) 
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of rows you want to print:";
	cin>>n;
	for(int i=0;i<=n-1;i++){
		for(int j=1;j<=n-i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
