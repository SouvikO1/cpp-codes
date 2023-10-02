//to make a mini calculator using switch(7)

#include <iostream>

using namespace std;


int main()
{
    int num1,num2;
    cout<<"enter any two number:";
    cin>>num1>>num2;
    char ch;
    cout<<"enter the operation you want to perform :";
    cin>>ch;
    switch(ch){
        case '+':cout<<"the addition of two numbers are:"<<(num1+num2);
        break;
        case '-':cout<<"the substraction of two numbers are:"<<(num1-num2);
        break;
        case '*':cout<<"the multiplication of two numbers are:"<<(num1*num2);
        break;
        case '/':cout<<"the division of two numbers are:"<<(num1/num2);
        break;
        case '%':cout<<"the modulus of two numbers are:"<<(num1%num2);
        break;
        default:cout<<"enter a valid operation";
    }
        
    return 0;
}
