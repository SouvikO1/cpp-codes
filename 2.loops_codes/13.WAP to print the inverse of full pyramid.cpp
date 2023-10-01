/*printing a  inverse full pyramid pattern(13)
 * * * * *
  * * * *
   * * *
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
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    
    

    return 0;
}
