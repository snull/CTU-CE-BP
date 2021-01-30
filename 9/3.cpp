#include <iostream>
using namespace std;
bool checker(int *list,int num,int x){
  bool y=false;
  for (int i=0;i<num;i++){
    if (list[i]==x){
      y=true;
      break;
    }
  }
  return(y);
}
int main(){
  cout<<endl;
  int *list,num,x;
  cout<<"array size : ";
  cin>>num;
  list = new int[num];
  cout<<"input numbers : ";
  for (int i=0;i<num;i++){
    cin>>list[i];
  }
  cout<<"input x : ";
  cin>>x;
  cout<<endl<<checker(list,num,x)<<endl;
  return 0;
}
