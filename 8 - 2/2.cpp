#include <iostream>
using namespace std;
int main(){
  int *p,*q;
  cout<<p<<endl<<q;
  p=new int;
  q=p;
  *p=46;
  *q=39;
  cout<<*p<<" "<<*q<<endl;
  return 0;
}
