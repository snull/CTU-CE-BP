#include <iostream>
using namespace std;
int main(){
  int a;
  cin>>a;
  switch(a){
    case 10 :
      cout<<"should not be ten"<<endl;
      break;
    case 20 :
      cout<<"Twenty"<<endl;
    case 30 :
      cout<<"Thirty"<<endl;
    case 40 :
      cout<<"forty"<<endl;
    default:
      cout<<"out of range"<<endl;
  }
  return 0;
}
