#include<iostream>

using namespace std;

class Matrix
{
  int **p,row,col;

  public:

  Matrix(int ,int );
  Matrix operator * (const Matrix & );
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

Matrix Matrix:: operator *( const Matrix &m)
{
    if((m.row==col))
    {
        Matrix temp(row,m.col);
        for(int i=0;i<row;++i)
        {   
            for(int j=0;j<m.col;++j)
            {
                temp.p[i][j]=0;
                for(int k=0;k<col;++k)
                     temp.p[i][j]=temp.p[i][j]+ p[i][k]*m.p[k][j];
            }

        }
        return temp;
    }
    cout<<"\nMultiplication Not possible:";
    exit(0); 
}

int main()
{
  Matrix M1(2,3);
  Matrix M2(3,2);
  M1.setter();
  M1.getter();
  M2.setter();
  M2.getter();  


  Matrix M=(M1*M2);

  M.getter();


  
}