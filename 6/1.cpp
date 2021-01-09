#include <iostream>
using namespace std;
int main(){
  cout<<endl;
  int a,max,min,i=1;
  cin>>a;
  max=a;
  min=a;
  while (i!=100){
    cin>>a;
    if (a>max){
      max=a;
    } else if (a<min){
      min=a;
    }
    i++;
  }
  cout<<"minimum number = "<<min<<endl;
  cout<<"maximum number = "<<max;
  return 0;
}
