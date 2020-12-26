#include <iostream>
using namespace std;
int main(){
  int a,b;
  float c=1;
  cin>>a>>b;
  if(b==0){
    cout<<"1";
  } else if (b>0){
    for (int i=1;i<=b;i++){
      c*=a;
    }
    cout<<c;
  } else {
    for (int i=1;i<=(-b);i++){
      c*=a;
    }
    cout<<1/c;
  }
  return 0;
}
