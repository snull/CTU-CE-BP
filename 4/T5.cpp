#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3,n4,n5;
    float average;
    cout<<"Please enter five integer numbers";
    cin>>n1>>n2>>n3>>n4>>n5;
    average=float(n1+n2+n3+n4+n5)/5;//iradat float va parantez(order operatorha) boodand.
    cout<<"Average of numbers="<<average<<endl;
    return 0;
}
