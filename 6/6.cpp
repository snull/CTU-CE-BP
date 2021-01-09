#include <iostream>
using namespace std;
int main(){
  cout<<endl;
  int i=1,j=2,k=1,c;
  cout<<"1"<<endl<<"2"<<endl;
  while (i<101){
    c=i/2 + 2;
    while( j <= i/2 + 2 ){
      if (i%j==0){break;}
      else if (j==c-1){cout<<i<<endl;}
      j++;
    }
    k=0;
    j=2;
    i++;
  }
  return 0;
}
