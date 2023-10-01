//checking the number is even or odd by calling a function(5)

#include <iostream>

using namespace std;

void even_number(int a){
        if(a%2==0){
            cout<<"even number";
        }
        else{
            cout<<"odd number";
        }
    }

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    even_number(num);
    
    return 0;
}

