//find the factorial of a number by calling a function(10)

#include <iostream>

using namespace std;

int factorial_num(int a){
    int total=1;
        for(int i=1;i<=a;i++){
            total=total*i;
        }
        return total;
    }

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    cout<<"the factorial is:"<<factorial_num(num);
    
    return 0;
}

