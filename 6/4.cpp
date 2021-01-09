#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int i=1,j=1;
  cout<<endl;
  cout<<"   : ";
  while (i<11){
      cout<<setw(4)<<i<<" ";
      i++;
  }
  i=1;
  cout<<endl<<"-------------------------------------------------------"<<endl;
  while (i<11){
      cout<<setw(2)<<i<<" : ";
      while (j<11){
          cout<<setw(4)<<i*j<<" ";
          j++;
      }
      j=1;
      cout<<endl;
      i++;
  }
  cout<<"-------------------------------------------------------";
  return 0;
}
