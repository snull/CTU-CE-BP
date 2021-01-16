#include <iostream>
using namespace std;
int main(){
  cout<<endl;
  int list[6];
  list[0]=5;
  for (int i=1;i<6;i++){
    list[i]=i*i+5;
    if(i>2){
      list[i]=2*list[i]-list[i-1];
    }
  }
  for (int i=0;i<5;i++){cout<<list[i]<<endl;}
  return 0;
}
