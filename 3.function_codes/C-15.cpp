//convert km to miles by calling a function(15)

#include <iostream>

using namespace std;



void miles_number(int a){
    float miles=a* 0.621371;
    cout<<"in miles:"<<miles;
}
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    miles_number(num);
    return 0;
}
