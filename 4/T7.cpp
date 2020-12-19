#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float x = 14.3827;
    cout<<"x is"<<setw(5)<<setprecision(2)<<x<<endl;
    cout<<"x is"<<setw(8)<<setprecision(2)<<x<<endl;
    cout<<"x is"<<setw(0)<<setprecision(2)<<x<<endl;
    cout<<"x is"<<setw(7)<<setprecision(3)<<x<<endl;
    return 0;
}
