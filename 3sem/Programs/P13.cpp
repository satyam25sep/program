#include<iostream>
#include<conio.h>

using namespace std;

class Matrix
{
  int **p,row,col;

  public:

  Matrix(int ,int );
  void setter();
  int getter();
  ~Matrix();
};

Matrix::Matrix(int n,int m)
{
  row=n;
  col=m;

  p=new int*[row];
  for(int i=0;i<row;++i)
  {
    p[i]=new int[m];

  }
}

void Matrix::setter()
{
  for(int i=0;i<row;++i)
  for(int j=0;j<col;++j)
  {
    cout<<"\nEnter the Element of Matrix At("<<i<<','<<j<<"):";
    cin>>p[i][j];

  }
}

int Matrix::getter()
{
  cout<<"\nElement of Matrix:\n";
  for(int i=0;i<row;++i)
  {
    for(int j=0;j<col;++j)
    {
    
      cout<<p[i][j]<<"    ";
    }
    cout<<endl;
  }
  return 0;
}

Matrix::~Matrix()
{
  for(int i=0;i<row;++i)
  {
    delete[] p[i];
  }
  delete p;
  p=NULL;
}

int main()
{
  Matrix M(3,3);
  M.setter();
  M.getter();
}