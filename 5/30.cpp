#include <iostream>
using namespace std;
int main(){
  int a;
  cin>>a;
  if (a==10){
    cout<<"should not be ten";
  } else if (a==20){
    cout<<"Twenty"<<endl;
    cout<<"Thirty"<<endl;
    cout<<"forty"<<endl;
    cout<<"out of range"<<endl;
  } else if (a==30){
    cout<<"Thirty"<<endl;
    cout<<"forty"<<endl;
    cout<<"out of range"<<endl;
  } else if (a==40){
    cout<<"forty"<<endl;
    cout<<"out of range"<<endl;
  } else {cout<<"out of range";}

  return 0;
}
