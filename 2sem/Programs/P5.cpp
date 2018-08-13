#include<iostream>
#include<conio.h>

using namespace std;

class Resourse 
{
  static bool ob = false;
  Resourse();
  public:
  Resourse Allocate();
  void Release(Resourse &R);
  ~Resourse();
};

Resourse::Resource()
{
  ob=true;
};
Resourse Resource::Allocate()
{
  if(ob==true)
  {
    cout<<"\n can't be allocated already!!\nAlready allocated to another process!!";
    return null;
  }
  else
  {
    cout<<"\nAllocated succesfully";
    return new Resourse();
  }
};

void Resource::Release(Resourse &R)
{
  if(false==ob)
  {
    cout<<"Resourse is not allocated to any object";
  }
  else
  {
    if(R==NULL)
    {
      cout<<"Empty reference to Resourse";
    }
    else
    {
      delete R;
      Cout<<"Resourse released";
    }

  }
};

Resource::~Resource(){ob=false;};

int main()
{
  Resource R;
  Resource R1;
  Resource &R2=new Resource();

}