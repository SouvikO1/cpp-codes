//print all the digit of an integer by calling a function(12)

#include <iostream>

using namespace std;



void print_number(int a){
    while(a>0){
        int x=a%10;
        cout<< x << " ";
        a=a/10;
    }
}
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    print_number(num);
    
    return 0;
}
