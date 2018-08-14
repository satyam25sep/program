#include<iostream>
#include<conio.h>

using namespace std;

int *copy(int a[],int n,int m)
{
  int *b = new int[m];
  for(int i=0;(i<n)&&(i<m);++i)
  {
    b[i]=a[i];
    cout<<"\nElement at index"<<i<<":";
    cout<<b[i];
  }
  return b;
}

int main()
{
  int a[10];
  for(int i=0;i<10;++i)
  {
    cout<<"\Enter the element at index "<<i<<":";
    cin>>a[i];
  }
  int *b=copy(a,10,15);
  int &x=*b;
  cout<<"\nSize of :"<<sizeof(b);
  delete[] b;

}