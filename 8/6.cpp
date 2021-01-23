#include <iostream>
using namespace std;
float fib(int x){
  if (x==1||x==0){
    return x;
  } else {return (fib(x-1)+fib(x-2));}
}
int main(){
  int x;
  cout<<"fib number : ";
  cin>>x;
  cout<<fib(x);
  return 0;
}
