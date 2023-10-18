/* printing a rectangle+pyramid pattern(23)

* * * * * * * 1 * * * * * * *
* * * * * * 2 * 2 * * * * * *
* * * * * 3 * 3 * 3 * * * * *
* * * * 4 * 4 * 4 * 4 * * * *
* * * 5 * 5 * 5 * 5 * 5 * * *

*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of rows you want to print:";
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n+3-i;j++){
			cout<<"* ";
		}
		for(int j=1;j<=2*i-1;j++){
			if(j%2==0){
				cout<<"* ";
			}
			else{
				cout<<i<<" ";
			}
		}
		for(int j=1;j<=n+3-i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
return 0;
}
