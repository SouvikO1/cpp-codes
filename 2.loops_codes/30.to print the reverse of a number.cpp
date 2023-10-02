// to print the reverse of a number(30)
// ex:123
// ans:321
// ex2:-123
// ans:-321


#include <iostream>

using namespace std;


int main()
{
    int n;
    cout<<"enter atlesat 2 digit number:";
    cin>>n;
    int ans=0;
    if(n>0){
        while(n>0){
        int x=n%10;
        ans=ans*10+x;
        n=n/10;
            
        }
        cout<<"the reverse of the number is:"<<ans;
    }
    else{
        n=n*-1;
        while(n>0){
        int x=n%10;
        ans=ans*10+x;
        n=n/10;
            
        }
        ans=ans*-1;
         cout<<"the reverse of the number is:"<<ans;
        
    }
    
    return 0;
}
