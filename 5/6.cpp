#include <iostream>
using namespace std;
int main(){
  int i,j,k,m,p;
  for (i=1;i<7;i++){
    j = k = i;
    m = ++j * i;
    p = k++ + m;
    cout<<"i = "<<endl;
    cout<<"m = "<<m<<" p = "<<p<<endl;
  }
  return 0;
}
