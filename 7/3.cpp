#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  cout<<endl;
  int list[50];
  for (int i=0;i<50;i++){
    if (i<25){
      list[i]=i*i;
    } else {list[i]=i*3;}
  }
  int j=0;
  for (int i=0;i<50;i++){
    if (j==10){
      cout <<endl;
      j=1;
    } else {j++;}
    cout<<setw(4)<<list[i]<<" ";
  }
  cout<<endl;
  return 0;
}
