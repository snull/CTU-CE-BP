#include <iostream>
using namespace std;
void calc(float x,float y,float &minus,float &mult,float &div){
  minus = x-y;
  mult = x*y;
  div = x/y;
}
int main(){
  float x,y,minus,mult,div;
  cout<<endl<<"input numbers : ";
  cin>>x>>y;
  calc(x,y,minus,mult,div);
  cout<<endl<<"Minus = "<<minus;
  cout<<endl<<"Multiplication = "<<mult;
  cout<<endl<<"Division = "<<div<<endl;
  return 0;
}
