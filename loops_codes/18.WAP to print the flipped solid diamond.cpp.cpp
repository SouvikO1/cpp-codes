/*printing a flipped solid diamond(18)
* * * * *   * * * * *
* * * *       * * * *
* * *           * * *
* *               * *
*                   *
*                   *
* *               * *
* * *           * * *
* * * *       * * * *
* * * * *   * * * * *    

*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"the number of rows you anr to print:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n+1-i;j++){
			cout<<"* ";
		}
		for(int j=1;j<=2*i-1;j++){
			cout<<"  ";
		}
		for(int j=1;j<=n+1-i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		for(int j=1;j<=(2*n+1)-2*i;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
