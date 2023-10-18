// find how many 1 bits are there in a number(29)
// ex:11
// bin=1011
// number of 1 bits=3

#include <iostream>

using namespace std;


int main()
{
    int n;
    cout<<"enter any decimal number:";
    cin>>n;
    int power=1;
    int binary=0;
    while(n>0){
        int x=n%2;
        binary=binary+(x*power);
        power*=10;
        n=n/2;
    }
    int count=0;
    while(binary>0){
        int y=binary%10;
        if(y==1){
            count++;
        }
        binary/=2;
    }
    cout<<"the total number of set bits are:"<<count;

    
    return 0;
}
