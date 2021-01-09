#include <iostream>
using namespace std;
int main(){
  cout<<endl;
  int a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;
  int a11=0,a12=0,a13=0,a14=0,a15=0,a16=0,a17=0,a18=0,a19=0,a20=0;
  int x,mode=0,mode_num,i=0,j=0;
  while (i!=100){
    cin>>x;
    switch (x){
      case 0:
        a0++;
        break;
      case 1:
        a1++;
        break;
      case 2:
        a2++;
        break;
      case 3:
        a3++;
        break;
      case 4:
        a4++;
        break;
      case 5:
        a5++;
        break;
      case 6:
        a6++;
        break;
      case 7:
        a7++;
        break;
      case 8:
        a8++;
        break;
      case 9:
        a9++;
        break;
      case 10:
        a10++;
        break;
      case 11:
        a11++;
        break;
      case 12:
        a12++;
        break;
      case 13:
        a13++;
        break;
      case 14:
        a14++;
        break;
      case 15:
        a15++;
        break;
      case 16:
        a16++;
        break;
      case 17:
        a17++;
        break;
      case 18:
        a18++;
        break;
      case 19:
        a19++;
        break;
      case 20:
        a20++;
        break;
    }
    i++;
  }
  if (a0 > mode){mode=a0;mode_num=0;}
  if (a1>mode){mode=a1;mode_num=1;}
  if (a2>mode){mode=a2;mode_num=2;}
  if (a3>mode){mode=a3;mode_num=3;}
  if (a4>mode){mode=a4;mode_num=4;}
  if (a5>mode){mode=a5;mode_num=5;}
  if (a6>mode){mode=a6;mode_num=6;}
  if (a7>mode){mode=a7;mode_num=7;}
  if (a8>mode){mode=a8;mode_num=8;}
  if (a9>mode){mode=a9;mode_num=9;}
  if (a10>mode){mode=a10;mode_num=10;}
  if (a11>mode){mode=a11;mode_num=11;}
  if (a12>mode){mode=a12;mode_num=12;}
  if (a13>mode){mode=a13;mode_num=13;}
  if (a14>mode){mode=a14;mode_num=14;}
  if (a15>mode){mode=a15;mode_num=15;}
  if (a16>mode){mode=a16;mode_num=16;}
  if (a17>mode){mode=a17;mode_num=17;}
  if (a18>mode){mode=a18;mode_num=18;}
  if (a19>mode){mode=a19;mode_num=19;}
  if (a20>mode){mode=a20;mode_num=20;}
  cout<<endl<<"MODE = "<< mode_num<<endl;
  return 0;
}
