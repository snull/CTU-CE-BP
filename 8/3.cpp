#include <iostream>
#include <string>
using namespace std;
bool secret(char a)
{
  if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
    return true;
  } else {return false;}
}
int main(){
  cout<<endl;
  char a;
  cout<<"Input the character :"<<endl;
  cin>>a;
  cout<<secret(a);
  return 0;
}
