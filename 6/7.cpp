#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main(){
  cout<<endl;
  int b,bb=0,cc=0,d;
  long double c,a,e;
  cin>>a;
  b=int(a);
  c=a;
  c=double(c-int(c));
  while (c-(int(c))!=0){
    c=double(c*10);
  }
  d=int(c);
  while (b>0){
    bb = bb*10 + b%10;
    b=b/10;
  }
  while (d>0){
    cc = cc*10 + d%10;
    d=d/10;
  }
  e=bb;
  while (bb>0){
    e=e/10;
    bb=bb/10;
  }
  e=e+cc;
  cout<<endl<<setprecision(numeric_limits<long double>::digits10 + 1)<<e<<endl;
  return 0;
}
