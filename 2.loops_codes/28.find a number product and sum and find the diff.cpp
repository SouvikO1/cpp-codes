//find a number product and sum and find the diff(28)
// ex:234
// product:2*3*4=24
// sum=2+3+4=9
// ans=24-9=15

#include <iostream>

using namespace std;


int main()
{
    int n;
    cout<<"enter atleast 2 digit number:";
    cin>>n;
    int product=1;
    int sum=0;
    while(n>0){
        int x=n%10;
        product=product*x;
        sum=sum+x;
        n=n/10;
    }
    cout<<"the difference:"<<(product-sum);

    
    return 0;
}
