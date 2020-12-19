#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    char ch;
    int n;
    float y;
    ch ='A';
    cout << ch;
    ch='B';
    cout<<ch<<endl;
    n=413;
    y=21.8;
    cout<<setw(5)<<n<<" is the value of n"<<endl;
    cout<<setw(7)<<y<<" is the value of y"<<endl;
    return 0;
}
