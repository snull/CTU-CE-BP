#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main(){
  cout<<endl;
  int *secret;
  int j;
  secret=new int[10];
  secret[0]=10;
  for (j=1;j<10;j++){
    secret[j]=secret[j-1]+5;
  }
  for (j=0;j<10;j++){
    cout<<secret[j]<<" ";
  }
  cout<<endl;
  return 0;
}
