#include<iostream>
#include<conio.h>

using namespace std;

class Array
{
  public:
  int length;
  int *ar;
  Array(int);
  ~Array();
  Array(const Array &);
  void setter();
  void getter();
  //int length();
};

Array::Array(int n=0)
{
  ar=new int[n];
  length=n;

}
Array::Array(const Array &n)
{
  ar=new int[n.length];
  length=n.length;
  for(int i=0;length>i;++i)
  {
    ar[i]=n.ar[i];
  }

}
Array::~Array()
{
  delete[] ar;
  ar=NULL;
  length=0;
  cout<<"\nObject deleted!!!";

}

void Array::setter()
{
  for(int i=0;length>i;++i)
  {
    cout<<"\n Enter the element of index "<<i<<":";
    cin>>ar[i];
  }
}

void Array::getter()
{
  for(int i=0;length>i;++i)
  {
    cout<<"\n Element of index "<<i<<":"<<ar[i];
  }
}

// int Array::length()
// {
//   return length;
// }
int main()
{
  Array A(5);
  cout<<"\n Size of array A:"<<A.length;
  Array B(A);
  cout<<"\n Size of array B:"<<B.length;
  B.setter();
  B.getter();
}