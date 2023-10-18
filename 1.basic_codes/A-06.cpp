//to check if the input is upper or lower case(6)

#include <iostream>

using namespace std;


int main()
{
    char ch;
    cout<<"enter a charecter:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lower case";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"upper case";
    }
    else{
        cout<<"enter a charecter";
    }
    return 0;
}
