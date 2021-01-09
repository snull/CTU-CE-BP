#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  cout<<endl;
  long double a;
  cin>>a;
  cout<<endl<<int(a);
  a=double(a-int(a));
  while (a-(int(a))!=0){
    a=double(a*10);
  }
  cout<<endl<<a<<endl;
  return 0;
}
