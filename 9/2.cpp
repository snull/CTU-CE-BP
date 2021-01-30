#include <iostream>
using namespace std;
float avg(int *list,int num){
  float sum=0;
  for (int i=0;i<num;i++){
    sum+=list[i];
  }
  return(sum/num);
}
int main(){
  cout<<endl;
  int *list,num;
  cout<<"array size : ";
  cin>>num;
  list = new int[num];
  cout<<"input numbers : ";
  for (int i=0;i<num;i++){
    cin>>list[i];
  }
  cout<<endl<<"average is "<<avg(list,num)<<endl;
  return 0;
}
