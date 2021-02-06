#include <iostream>
#include <string>
using namespace std;
void reverse(char * st){
  int i=0,j=0;
  while(st[i]!='\0'){
    i++;
  }
  char temp[i+1];
  temp[i]='\0';
  i--;
  while(i>=0){
    temp[j]=st[i];
    i--;
    j++;
  }
  *st=*temp;
}
int main(){
  cout<<endl;
  int n;
  cout<<"input string size : ";
  cin>>n;
  char st[n+1];
  cout<<"input the string : ";
  for (int i=0;i<n;i++){
    cin>>st[i];
  }
  st[n]='\0';
  reverse(st);
  cout<<endl<<st<<endl;
  return 0;
}
