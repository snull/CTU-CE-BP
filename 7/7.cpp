#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout<<endl;
  string str1="Amusement Park";
  string str2="Going to";
  string str3="the";
  string str;
  cout<<str2+' '+str3+' '+str1<<endl;
  cout<<str1.length()<<endl;
  cout<<str1.find('P')<<endl;
  cout<<str1.substr(1,5)<<endl;
  str="ABCDEFGHIJK";
  cout<<str<<endl;
  cout<<str.length()<<endl;
  str[0]='a';
  str[2]='d';
  cout<<str<<endl;
  return 0;
}
