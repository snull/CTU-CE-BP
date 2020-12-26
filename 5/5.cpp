#include <iostream>
using namespace std;
int main(){
  int mark;
  cin>>mark;
  if (mark>=0&&mark<10){
    cout<<"F";
  } else if (mark>=10&&mark<12){
    cout<<"D"<<endl;
  } else if (mark>=12&&mark<15){
    cout<<"C"<<endl;
  } else if (mark>=15&&mark<=18){
    cout<<"B"<<endl;
  } else if (mark>=18&&mark<=20){
    cout<<"A"<<endl;
  } else {cout<<"out of range";}
  return 0;
}
