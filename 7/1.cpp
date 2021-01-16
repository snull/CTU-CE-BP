#include <iostream>
using namespace std;
int main(){
  cout<<endl;
  int list[5];
  for (int i=0;i<5;i++){
    list[i]=2*i+5;
    if(i%2==0){
      list[i]=list[i]-3;
    }
  }
  for (int i=0;i<5;i++){cout<<list[i]<<endl;}
  return 0;
}
