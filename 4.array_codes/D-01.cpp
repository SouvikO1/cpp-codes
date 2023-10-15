//first make a 10 size array then take input and double the value(1)
#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int n=10;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        arr[i]=2*arr[i];
    }
    cout<<endl<<endl<<"after double up"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

