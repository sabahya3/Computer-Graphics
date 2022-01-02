#include <iostream>
#include<cmath>

using namespace std;

int main()
{
  double xf,yf,xe,ye,m,steps,xp,yp,deltaX,deltaY;

  cout<<"Enter the first point"<<endl;
  cin>>xf>>yf;
   cout<<"Enter the end point"<<endl;
  cin>>xe>>ye;
  deltaX=xe-xf;
    deltaY=ye-yf;
  m=deltaY/deltaX;

  if(abs(deltaX)>abs(deltaY)){

    steps=abs(deltaX);
  }else{
  steps=abs(deltaY);
  }
  int i=1;
 while(i<=steps){
     if(m<1){

    xf++;
    yf=m+yf;

    xp=round(xf);
    yp=round(yf);

  }
   else if(m==1){
    xf++;
    yf++;


    xp=round(xf);
    yp=round(yf);

  }
    else  {
    xf=(1/m)+xf;
    yf++;


    xp=round(xf);
    yp=round(yf);

  }

    cout<<"("<<"x"<<i<<" , "<<"y"<<i<<")"<<" = "<<"("<<xp<<" ,"<<yp<<")"<<endl;
i++;


 }


    return 0;
}
