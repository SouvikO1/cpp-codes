// to print the decimal of the complement of a number(31)
// ex:5
// binary:101
// complementary:010
// ans:2


#include <iostream>
#include<math.h>

using namespace std;


int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    int binary=0;
    int power=1;
    while(n>0){
        int x=n%2;
        if(x==0){
            x=x+1;
            binary=binary+x*power;
            power*=10;
            n/=2;
        }
        else{
            x=x-1;
            binary=binary+x*power;
            power*=10;
            n/=2;
        }
        
    }
    int upper_value=0;
    int total=0;
    while(binary>0){
        int y=binary%10;
        total=total+(y*pow(2,upper_value));
        upper_value++;
        binary/=10;
    }
    cout<<"after doin the complement of the input the decimal value is:"<<total;
    
   
    
    return 0;
}
