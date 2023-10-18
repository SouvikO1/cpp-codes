//finding the max of 3 number by calling a function(3)

#include <iostream>

using namespace std;

int max_num(int a,int b,int c){
    int maximum=max((max(a,b)),c);
    return maximum;
}

int main()
{
    int num1,num2,num3;
    cout<<"Enter the three numbers:";
    cin>>num1>>num2>>num3;
    cout<<"the maximum of three numbers is:"<<max_num(num1,num2,num3);
    
    return 0;
}

