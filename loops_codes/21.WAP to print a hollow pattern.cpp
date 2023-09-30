/*printing a hollow triangle (21)

1
1 2
1   3
1     4
1       5
1         6
1 2 3 4 5 6 7


*/


#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of rows you wanr to print:";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(j==1 || j==i || i==n){
				cout<<j<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
		
	return 0;
}
