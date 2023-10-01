//addition of three numbers by calling a function(2)

#include <iostream>

using namespace std;

int addition(int a,int b,int c){
    int sum=a+b+c;
    return sum;
}

int main()
{
    int num1,num2,num3;
    cout<<"Enter the three numbers:";
    cin>>num1>>num2>>num3;
    cout<<"the addition of three numbers are:"<<addition(num1,num2,num3);
    
    return 0;
}

