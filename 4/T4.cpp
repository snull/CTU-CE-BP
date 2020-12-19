#include <iostream>
using namespace std;
int main(){
    /* This program reads the value of base and height
        of a triangle,and compute it's surface.
        variable b is used for base,and variable h is used for height.
    */
    float b,h;
    cout<<"Please enter the vaue of base and height.";
    cin>>b>>h;
    cout<<"surface of triangle="<<b*h*0.5<<endl;
    return 0;
}
