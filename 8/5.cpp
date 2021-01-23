#include <iostream>
using namespace std;
float pow(float x,int y){
  float z=1;
  if (y==1){
    z=x;
  } else if (x>1){
    z=x*pow(x,y-1);
  }
  return z;
}
int main(){
  float x;
  int y;
  cout<<"input x and y : ";
  cin>>x>>y;
  cout<<pow(x,y);
  return 0;
}
