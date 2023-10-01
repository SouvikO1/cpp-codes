//counting from (1-n) by calling a function(8)

#include <iostream>

using namespace std;

void total_count(int a){
	for(int i=1;i<=a;i++){
        cout<<i <<endl;
        }
    }

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    total_count(num);
    
    return 0;
}

