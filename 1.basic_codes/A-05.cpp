//write a program to convert decimal to binary(5)  

#include <iostream>

using namespace std;

int main()
{
    int decimal;
    cout<<"give the input in decimal:";
    cin>>decimal;
    int sum=0;
    int power=1;
    while(decimal>0){
        int last_digit=decimal%2;
        sum=sum+(last_digit*power);
        power*=10;
        decimal/=2;
    }
    cout<<"the binary value is :"<<sum<<endl;

    return 0;
}
