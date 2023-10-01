//fibonacci series(27)

#include <iostream>

using namespace std;


int main()
{
    int n;
    cout<<"how many numbers you want to print:";
    cin>>n;
    int num1=0;
    int num2=1;
    cout<<num1<<endl;
    cout<<num2<<endl;
    for(int i=1;i<=n;i++){
        int num3=num1+num2;
        cout<<num3<<endl;
        num1=num2;
        num2=num3;
    }
    return 0;
}
