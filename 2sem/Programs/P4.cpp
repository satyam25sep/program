#include<iostream>
#include<conio.h>

using namespace std;

void sort(int a[])
{
  if(a[0]>a[1])
  {
    int temp=a[0];
    a[0]=a[1];
    a[1]=temp;
  }
};

int main()
{
  int a[2];
  cout<<"\nEnter the first no.:";
  cin>>a[0];
  cout<<"\nEnter the second no.:";
  cin>>a[1];
  sort(a);
  cout<<"\n order is :"<<a[0]<<","<<a[1];
  return 0;
}


