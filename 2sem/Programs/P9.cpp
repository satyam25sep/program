#include<iostream>
#include<conio.h>
 
using namespace std;

class Box
{
  float length,breadth,height;
  public:
  Box(float,float,float);
  float Volume();
};

Box::Box(float p,float q,float r=10)
{
  length=p;
  breadth=q;
  height=r;

}


 float Box::Volume()
{
  return (length*breadth*height);

}

int main()
{
  Box B(6,7);
  cout<<"\nVolume of box is :"<<B.Volume();
  return 0;
}

