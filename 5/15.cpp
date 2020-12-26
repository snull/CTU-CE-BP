#include <iostream>
using namespace std;
int main(){
  int a=1,k,f=1;
  cin>>a;
  if(a==0){
    cout<<"1";
  } else if (a>0){
    for(int i = 1; i <=a; ++i){
      f *= i;
    }
    cout <<f;
  } else {cout<<"undefined";}

  return 0;
}
