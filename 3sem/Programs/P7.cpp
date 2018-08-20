#include<iostream>
#include<conio.h>

using namespace std;

float Volume(float a,float b,float c)
{
  return (a*b*c);
};

float Volume(float a)
{
  return (a*a*a);
}

int main()
{
  float a=7;
  float b=6;
  float c=10;

  cout<<"\nVolume of cube :"<<Volume(a);
  cout<<"\n volume of cuboid:"<<Volume(a,b,c);

}