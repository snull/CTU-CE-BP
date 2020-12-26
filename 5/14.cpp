#include <iostream>
using namespace std;
int main(){
  int a;
  cin>>a;
  if (a<2){
    cout<<"NO"<<endl;
  } else {
    for (int i=2;i<a;i++){
      if (a%i==0){
        cout<<"NO"<<endl;
        break;
      } else if (i==a-1){
        cout<<"YES"<<endl;
      }
    }
  }
  return 0;
}
