/*printing a inverted right angle pattern(9) 
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *

*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of rows you want to print:";
	cin>>n;
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-i-1;j++){
			cout<<" * ";
		}
		cout<<endl;
	}
	return 0;
}
