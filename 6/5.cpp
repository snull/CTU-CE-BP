#include <iostream>
using namespace std;
int main(){
  cout<<endl;
  int a,sum=0,i;
  cin>>a;
  while (a!=0){
    sum=sum + a - a/10*10;
    a=a/10;
  }
  cout<<sum;
  return 0;
}
