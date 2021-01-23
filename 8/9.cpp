#include <iostream>
using namespace std;
bool prime(int x){
  for (int i=2;i<x;i++){
    if (i==(x-1)){
      return true;
      break;
    }
    if ((x%i)==0){
      return false;
      break;
    }
  }
}
int main()
{
  int x;
  cout<<"input the number : ";
  cin>>x;
  cout<<prime(x);
  return 0;
}
