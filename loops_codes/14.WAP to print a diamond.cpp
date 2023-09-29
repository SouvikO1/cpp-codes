//printing a diamond(14)
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter  the number of rows to want to print:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        
        cout<<endl;
    }
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}


