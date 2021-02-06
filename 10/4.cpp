#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout<<endl;
  string a;
  int n,vowels=0,capital=0,small=0,num=0;
  cout<<"Input the text :"<<endl<<endl;
  getline(cin,a);
  n=a.length();
  for (int i=0;i<n;i++){
    if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
      vowels++;
    }
    if (a[i]>=48 && a[i]<=57){
      num++;
    }
    if (a[i]>=65 && a[i]<=90){
      capital++;
    }
    if (a[i]>=97 && a[i]<=122){
      small++;
    }
  }
  cout<<endl<<"Vowels : "<<vowels;
  cout<<endl<<"Capitals : "<<capital;
  cout<<endl<<"smalls : "<<small;
  cout<<endl<<"Numbers : "<<num<<endl;
  return 0;
}
