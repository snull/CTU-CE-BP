#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#include <iostream>
using namespace std;
int main(){
  char a;
  cout<<"Choose your color : ";
  cin>>a;
  switch (a){
    case 'B' :
      cout<<BLUE<<"The chosen color is Blue"<<endl;
      break;
    case 'b' :
      cout<<BLUE<<"The chosen color is Blue"<<endl;
      break;
    case 'r' :
      cout<<RED<<"The chosen color is Red"<<endl;
      break;
    case 'R' :
      cout<<RED<<"The chosen color is Red"<<endl;
      break;
    case 'G' :
      cout<<GREEN<<"The chosen color is Green"<<endl;
      break;
    case 'g' :
      cout<<GREEN<<"The chosen color is Green"<<endl;
      break;
    case 'Y' :
      cout<<YELLOW<<"The chosen color is Yellow"<<endl;
      break;
    case 'y' :
      cout<<YELLOW<<"The chosen color is Yellow"<<endl;
      break;
    case 'M' :
      cout<<MAGENTA<<"The chosen color is Magenta"<<endl;
      break;
    case 'm' :
      cout<<MAGENTA<<"The chosen color is Magenta"<<endl;
      break;
    case 'C' :
      cout<<CYAN<<"The chosen color is Cyan"<<endl;
      break;
    case 'c' :
      cout<<CYAN<<"The chosen color is Cyan"<<endl;
      break;
    case 'W' :
      cout<<WHITE<<"The chosen color is White"<<endl;
      break;
    case 'w' :
      cout<<WHITE<<"The chosen color is White"<<endl;
      break;
  }

  return 0;
}
