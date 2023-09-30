/*printing a numeric pyramid (22)

    1
   121
  12321
 1234321
123454321

*/


#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of rows you wanr to print:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=i-1;j++){
			cout<<j;
		}
		for(int j=i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
	}	
	
	return 0;
}
