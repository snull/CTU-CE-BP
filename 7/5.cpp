#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout<<endl;
  int a[6];
  bool x=true;
  cout<<"input : ";
  for (int i=0;i<6;i++){
    cin>>a[i];
  }
  for (int i=0;i<6;i++){
    if (a[i]!=a[5-i]){
      x=false;
    }
  }
  cout<<endl;
  if (x==false){
    cout<<"NO";
  } else {cout<<"YES";}
  cout<<endl;
  return 0;
}
