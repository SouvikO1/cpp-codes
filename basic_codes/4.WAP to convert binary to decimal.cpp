//write a program to convert binary to decimal(4)
#include<math.h>

#include <iostream>

using namespace std;

int main()
{
    int bin;
    cout<<"give the input in binary:";
    cin>>bin;
    int sum=0;
    int power_value=0;
    while(bin>0){
        int last_digit=bin%10;
        sum=sum+(pow(2,power_value)*last_digit);
        power_value++;
        bin/=10;
    }
    cout<<"the decimal value is :"<<sum<<endl;

    return 0;
}
