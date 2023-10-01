//print the sum upto n terms by calling a function(6)

#include <iostream>

using namespace std;

int total_sum(int a){
        int sum=0;
        for(int i=1;i<=a;i++){
            sum=sum+i;
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

