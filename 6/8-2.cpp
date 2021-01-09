#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  cout<<endl;
  int a=0,b=0,i=0,j=0;
  char x;
  while (i==0){
    cin.get(x);
    if (x=='.'){
      j++;
    } else if (x=='\n'){
      break;}

    if (j==0){
      a=a*10 + x-'0';
    } else if (j==1){
      j++;
    } else {b=b*10 + x-'0';}
  }
  cout<<endl<<a<<endl<<b<<endl;
  return 0;
}
