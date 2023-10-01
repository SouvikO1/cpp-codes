//checking the number is prime or not by calling a function(4)

#include <iostream>

using namespace std;

bool prime_number(int a){
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    
}

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int prime=prime_number(num);
    if(prime==true){
        cout<<"the number is a prime number";
    }
    else{
        cout<<"the number is not prime";
    }
    
    return 0;
}

