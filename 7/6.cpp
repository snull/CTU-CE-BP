#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout<<endl;
  int ar=0,ac=1;
  bool x=true;
  while (ac!=ar){
    cout<<"notice that matrix column should be equal to matrix row !"<<endl;
    cout<<"row : ";
    cin>>ar;
    cout<<"column : ";
    cin >>ac;
  }
  int a[ar][ac];
  cout<<endl<<"Input matrix:"<<endl<<endl;
  for (int i=0;i<ar;i++){
    for (int j=0;j<ac;j++){
      cin >> a[i][j];
    }
  }
  for (int i=0;i<ar;i++){
    for (int j=0;j<ac;j++){
      if (a[i][j] != a[j][i]){x=false;}
    }
  }
  if (x==true){
    cout<<endl<<"YES"<<endl;
  } else {cout<<endl<<"NO"<<endl;}
  return 0;
}
