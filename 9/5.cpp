#include <iostream>
using namespace std;
void * address(int *a,int n){
  a=new int[n];
  return(a);
}
int main(){
  cout<<endl;
  int *a,n;
  cout<<"input : ";
  cin>>n;
  cout<<endl<<"address : "<<address(a,n)<<endl;
  return 0;
}
