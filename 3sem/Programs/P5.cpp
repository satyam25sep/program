#include<iostream>
#include<conio.h>

using namespace std;

class Resource 
{
  static bool ob;
  bool Alloc;
  public:
  Resource();
  void Allocate();
  void Release();
  ~Resource();
};

Resource::Resource()
{
  Alloc=false;
};
void Resource::Allocate()
{
  if(ob==true)
  {
    cout<<"\n can't be allocated already!!\nAlready allocated to another process!!";
    
  }
  else
  {
    ob=true;
    Alloc=true;
    cout<<"\nAllocated succesfully";
    
  }
};

void Resource::Release()
{
  if(false==ob)
  {
    cout<<"\nResourse is not allocated to any object";
  }
  else
  {
    if(Alloc==false)
    {
      cout<<"\nEmpty reference to Resourse";
    }
    else
    {
      ob=false;
      Alloc =false;
      cout<<"\nResourse released";
    }

  }
};
bool Resource::ob=false;

Resource::~Resource(){
  if(Alloc ==true)
  ob=false;};

int main()
{
  Resource R;
  Resource R1;
  Resource R2;
  R.Allocate();
  R1.Allocate();
  R1.Release();
  R.Release();
  R2.Allocate();


}