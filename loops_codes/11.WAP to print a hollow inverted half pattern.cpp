//printing a hollow inverted half pyramid(11) 
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number of rows you want to print:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            if(i==1 || i==n || j==0 || j==n-i){
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
