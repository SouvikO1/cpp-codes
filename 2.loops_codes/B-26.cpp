/*printing a butterfly pattern(26)

*                         *
* *                     * *
* * *                 * * *
* * * *             * * * *
* * * * *         * * * * *
* * * * * *     * * * * * *
* * * * * * * * * * * * * *
* * * * * * * * * * * * * *
* * * * * *     * * * * * *
* * * * *         * * * * *
* * * *             * * * *
* * *                 * * *
* *                     * *
*                         *

*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of rows to print:";
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			 cout<<"* ";
		}
		for(int j=1;j<=(n*2)-(2*i);j++){
		cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
	cout<<endl;
	}

	for(int i=0;i<=n-1;i++){
		for(int j=1;j<=n-i;j++){
			 cout<<"* ";
		}
		for(int j=1;j<=2*i;j++){
		cout<<"  ";
		
		}
		for(int j=1;j<=n-i;j++){
			cout<<"* ";
		}
	cout<<endl;
	}
	
return 0;
}
