#include <iostream>
using namespace std;
int main(){
  int mark;
  cout<<"enter the mark : ";
  cin>>mark;

  if (mark<0||mark>20){
    cout<<"out of range"<<endl;
  } else if (mark>=0 && mark<10){
    cout<<"failed"<<endl;
  } else if (mark>=10&&mark<=14){
    cout<<"passed"<<endl;
  } else {
    cout<<"passed very good"<<endl;
  }

  return 0;
}
