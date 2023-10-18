//convert celcius to farenheit by calling a function(13)

#include <iostream>

using namespace std;



float farhenheit_number(int a){
   float celcius=(((a*9)/5)+32);
   return celcius;
}
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    cout<<"in farhenheit:"<<farhenheit_number(num);
    return 0;
}
