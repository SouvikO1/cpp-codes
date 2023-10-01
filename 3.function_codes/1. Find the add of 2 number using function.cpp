//addition of two numbers by calling a function(1)

#include <iostream>

using namespace std;

int addition(int a,int b){
    int sum=a+b;
    return sum;
}

int main()
{
    int num1,num2;
    cout<<"Enter the two numbers:";
    cin>>num1>>num2;
    cout<<"the addition of two numbers are:"<<addition(num1,num2);
    
    return 0;
}

