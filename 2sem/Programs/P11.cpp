#include<iostream>
#include<conio.h>
 
 using namespace std;

 class Integer
 {
   int a;
   public:
   Integer(int n);
   Integer(char *);
   int getter();
 };

 Integer::Integer(int n)
 {
   a=n;
   cout<<"\n This is integer constructor with value:"<<a;
 }

Integer::Integer(char *p)
{
  a=atoi(p);
  cout<<"\n This is character constructor with value:"<<a;
}

int Integer::getter()
{
  return a;
}

int main()
{
  Integer I1(23);
  Integer I2("78");

  cout<<"\nThis is I1 object :"<<I1.getter();
  cout<<"\nThis is I2 object :"<<I2.getter();
} 