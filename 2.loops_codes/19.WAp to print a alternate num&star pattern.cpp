/*printing a pattern to print a alternate number&star (19)
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5

*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of rows you want to print: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*i-1;j++){
			if(j%2==0){
				cout<<"*";
			}
			else{
				cout<<i
				;
			}
		}
		cout<<endl;
	}	
	
	return 0;
}
