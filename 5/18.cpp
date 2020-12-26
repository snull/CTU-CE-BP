#include <iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"a = ";
  cin>>a;
  cout<<"b = ";
  cin>>b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"*********************"<<endl<<"a = "<<a<<endl<<"b = "<<b;
  return 0;
}
