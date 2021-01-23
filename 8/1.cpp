#include <iostream>
using namespace std;
int mystery(int x,double y,char ch)
{
  int u;
  if ('A'<=ch&ch<='R'){
    return(2*x + static_cast<int>(y));
  } else {return (static_cast<int>(2*y)-x);}
}
int main(){
  cout<<mystery(5,4.3,'B')<<endl;
  cout<<mystery(4,9.7,'v')<<endl;
  cout<<2*mystery(5,4.3,'D')<<endl;
  return 0;
}
