#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
  float a=0,b=0,i=1,j;
  cout<<endl;
  while (i>0){
    a = a + 1.0/i;
    if ((fabs(a-b))<=0.001){
      break;
    } else {b=a;}
    i++;
  }
  cout<<setprecision(4)<<a<<endl;
  return 0;
}
