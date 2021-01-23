#include <iostream>
#include <string>
using namespace std;
int main(){
  int *p,*q;
  p=new int;
  *p=43;
  q=p;
  *q=52;
  delete q;
  return 0;
}
