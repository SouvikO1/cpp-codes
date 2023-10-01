//find the area of a circle by calling a function(9)

#include <iostream>

using namespace std;

float area_circle(int r){
        float area =3.14*r*r;
        return area;
        }

int main()
{
    int num;
    cout<<"Enter the length of the radius :";
    cin>>num;
    cout<<"the area of the circle is:"<<area_circle(num);
    
    return 0;
}

