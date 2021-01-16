#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout<<endl;
  string a,b;
  int n;
  cout<<"Input the text :"<<endl;
  getline(cin,a);
  n=a.length();
  cout<<b;
  for (int i=0;i<n;i++){
    if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
      if (i==0){
        a=a.substr(1,n-1);
        i--;
      } else if (i!=0) {
        a=a.substr(0,i)+a.substr(i+1,n);
        i--;
      }
    }
    n=a.length();
  }
  cout<<endl<<a<<endl;
  return 0;
}
