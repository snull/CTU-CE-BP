#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout<<endl;
  int ar,ac=0,br=1,bc;
  while (ac!=br){
    cout<<"notice that first matrix column should be equal to second matrix row !"<<endl;
    cout<<"first matrix row and column  : ";
    cin>>ar>>ac;
    cout<<"second matrix row and column : ";
    cin >>br>>bc;
  }
  int a[ar][ac],b[br][bc],c[ar][bc];
  cout<<endl<<"first matrix:"<<endl;
  for (int i=0;i<ar;i++){
    for (int j=0;j<ac;j++){
      cin >> a[i][j];
    }
  }
  cout<<endl<<"second matrix:"<<endl;
  for (int i=0;i<br;i++){
    for (int j=0;j<bc;j++){
      cin >> b[i][j];
    }
  }
  for (int i=0;i<ar;i++){
    for (int j=0;j<bc;j++){
      c[i][j]=0;
      for (int k=0;k<ac;k++){
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  cout<<endl<<" ___";
  for (int i=0;i<=5*bc+-6;i++){cout<<" ";}
  cout<<"___"<<endl;
  cout<<"|";
  for (int i=0;i<=5*bc;i++){cout<<" ";}
  cout<<"|"<<endl;
  for (int i=0;i<ar;i++){
    for (int j=0;j<bc;j++){
      if (j==0){
        cout<<"|"<<setw(4)<<c[i][j]<<" ";
      } else if (j==bc-1){
        cout<<setw(4)<<c[i][j]<<"  |";
      } else {cout<<setw(4)<<c[i][j]<<" ";}
      if (j==bc-1){
        cout<<endl;
      }
    }
  }
  cout<<"|___";
  for (int i=0;i<=5*bc-6;i++){cout<<" ";}
  cout<<"___|"<<endl;
  return 0;
}
