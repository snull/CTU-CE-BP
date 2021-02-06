#include <iostream>
using namespace std;
int main(){
  char st[]="mxcdaf";
  int i=0;
  while(st[i]!='\0'){
    i++;
  }
  i--;
  while(i>=0){
    cout<<st[i];
    i--;
  }
  return 0;
}
