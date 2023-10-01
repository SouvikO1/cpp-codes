//convert decimal to binary by calling a function(14)

#include <iostream>

using namespace std;



void decimal_number(int a){
    int power=1;
    int total=0;
   while(a>0){
       int x=a%2;
       total=total+x*power;
       power*=10;
       a=a/2;
   }
   cout<<"the binary value is:"<<total;
}
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    decimal_number(num);
    return 0;
}
