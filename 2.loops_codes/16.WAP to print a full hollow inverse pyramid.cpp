/*printing a hollow full inverse pyramid(16)
* * * * *
 *     *
  *   *
   * *
    *

*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number of rows you want to print:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=n+1-i;j++){
        	if(j==1 || j==n+1-i || i==1){
        		cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
        
        cout<<endl;
    }
    

    return 0;
}



