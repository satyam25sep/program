#include<iostream>
//#include<conio.h>

using namespace std;

class Rno
{
    int n,d;
    public:
    Rno(int ,int);
    Rno operator+(const Rno &);
    void display();
};
Rno::Rno(int a,int b=1)
{
    n=a;
    d=b;
}

Rno Rno::operator+(const Rno &R1 )
{
    Rno temp(0);
    temp.n=(n*R1.d)+(d*R1.n);
    temp.d=d*R1.d;
    int i=d>n?n:d;
    --i;
    for(;i>1;--i)
    {
        if(!((temp.n%i)||(temp.d%i)))
        {
            temp.n/=i;
            temp.d/=i;
        }
    }
    return temp;
}

void Rno::display()
{
    cout<<"\nThe Rational no is:"<<n<<"/"<<d;
}

int main()
{
    Rno R1(3,4);
    Rno R2(5,10);
    R1.display();
    R2.display();
    cout<<"\nThis is rational no. after addtion:";
    R1=R1+R2;
    R1.display();

};