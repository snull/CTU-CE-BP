#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout<<endl;
  string a;
  int n,sum=0;
  cout<<"Input the text :"<<endl<<endl;
  getline(cin,a);
  n=a.length();
  for (int i=0;i<n;i++){
    if (a[i]>=48 && a[i]<=57){
      sum+=a[i]-'0';
    }
  }
  cout<<endl<<"Sum : "<<sum<<endl;
  return 0;
}
