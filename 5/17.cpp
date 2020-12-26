#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"a = ";
  cin>>a;
  cout<<"b = ";
  cin>>b;
  if (b<a){
    b=a+b ; a=b-a ; b=b-a ;
  }
  cout<<"c = ";
  cin>>c;
  if (c<b){
    c=c+b ; b=c-b ; c=c-b ;
  }
  if (b<a){
    b=a+b ; a=b-a ; b=b-a ;
  }
  cout<<"****************"<<endl<<a<<endl<<b<<endl<<c<<endl<<"****************";
  return 0;
}
