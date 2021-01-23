#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  float x,y,a,b,c;
  cout<<"input x,y,a,b,c : ";
  cin>>x>>y>>a>>b>>c;
  cout<<endl<<sqrt(pow(x,2) + fabs(b));
  cout<<endl<<fabs(sqrt(pow(x,2)+pow(y,2)));
  cout<<endl<<exp(-sqrt(x));
  cout<<endl<<sqrt(fabs(a*pow(x,2) + b*x + c));
  cout<<endl<<exp(-x/3);
  return 0;
}
