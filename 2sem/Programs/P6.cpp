#include<iostream>
//#include<conio>

using namespace std;

class Kilo;
class Pound
{
    int po,ou;
    public:
    void setter(void)
    {
        cout<<"\nEnter the weight in pound";
        cin>>po>>ou;
        display();
    }
    void display()
    {
        cout<<"\n"<<po<<"pound"<<ou<<"ounce";
    }
    friend Pound add(const Pound ,const Kilo );
};

class Kilo
{
    int kg,g;
public:
    void setter(void)
    {
        cout<<"\nEnter the weight in kilo";
        cin>>kg>>g;
        display();
    }
    void display()
    {
        cout<<"\n"<<kg<<"Kilo"<<g<<"gram";
    }
    friend Pound add(const Pound ,const Kilo);
};


Pound add(const Pound a,const Kilo b)
{
    Pound P;
    P.ou=(a.po*16)+a.ou;
    P.ou+=((b.kg*1000)+b.g)/28;
    P.po=P.ou/16;
    P.ou=P.ou%16;
    return P;
}

int main()
{
    Pound p1,p2;
    Kilo k1;
    p1.setter();
    k1.setter();
    p2=add(p1,k1);
    p2.display();
    return 0;
}
