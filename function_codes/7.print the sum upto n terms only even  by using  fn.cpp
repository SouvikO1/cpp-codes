//print the sum upto n terms only even numbers by calling a function(7)

#include <iostream>

using namespace std;

int total_sum(int a){
        int sum=0;
        for(int i=1;i<=a;i++){
            if(i%2==0){
                sum=sum+i;
            }
        }
        return sum;
    }

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    cout<<"the sum is:"<<total_sum(num);
    
    return 0;
}

