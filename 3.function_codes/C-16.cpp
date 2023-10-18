//to find the nCr(8)

#include <iostream>

using namespace std;

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int x,int y){
    int total=(factorial(x))/((factorial(y))*(factorial(x-y)));
    return total;
}

int main()
{
    int n;
    cout<<"enter the n of nCr:";
    cin>>n;
    int r;
    cout<<"enter the r of nCr:";
    cin>>r;
    cout<<"the final answer is:"<<nCr(n,r);
   
    
    return 0;
}
