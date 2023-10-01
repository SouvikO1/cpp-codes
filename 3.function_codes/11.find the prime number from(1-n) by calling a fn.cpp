//find the prime number from(1-n) by calling a function(11)

#include <iostream>

using namespace std;


bool prime_check(int a){
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}
void prime_count(int b){
    for(int i=1;i<=b;i++){
        if(prime_check(i)){
        cout<<"prime:"<<i<<endl;
            
        }
    }
}
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    prime_count(num);
    
    return 0;
}
