#include<iostream>
#include "class.h"
using namespace std;
rationalnumber::rationalnumber()
{
    hurtver=6;
    huviar=4;
    counter=0;
}
rationalnumber::rationalnumber(int a, int b)
{
    hurtver=a;
    huviar=b;
}
void rationalnumber::getdata()
{
    if(hurtver==huviar)
    {
        cout<<"1";
    }
    else if(hurtver==0&&huviar!=0)
    {
        cout<<hurtver;
    }
    else if(huviar==0&&hurtver!=0)
    {
        cout<<"hyzgaargui";
    }
    else if(huviar==1&&hurtver!=0)
    {
        cout<<hurtver;
    }
    else if(hurtver!=huviar)
    {
        cout<<hurtver<<endl;
        cout<<"--"<<endl;
        cout<<huviar<<endl;
    }
}
rationalnumber rationalnumber::operator+(const rationalnumber &a)
{
    rationalnumber tempt;
    tempt.hurtver=hurtver*a.huviar+a.hurtver*huviar;
    tempt.huviar=huviar*a.huviar;
    return tempt;
}
rationalnumber rationalnumber::operator+(float &a)
{
    rationalnumber tempt;
    a=a*100000;
    tempt.hurtver=hurtver*100000+a*huviar;
    tempt.huviar=huviar*100000;
    return tempt;

}
rationalnumber rationalnumber::operator*(const rationalnumber &a)
{
    rationalnumber tempt;
    tempt.hurtver=hurtver*a.hurtver;
    tempt.huviar=huviar*a.huviar;
    return tempt;
}
rationalnumber rationalnumber::operator/(const rationalnumber &a)
{
    rationalnumber tempt;
    tempt.hurtver=hurtver*a.huviar;
    tempt.huviar=huviar*a.hurtver;
    return tempt;
}
rationalnumber rationalnumber::operator-(const rationalnumber &a)
{
    rationalnumber tempt;
    tempt.hurtver=hurtver*a.huviar-a.hurtver*huviar;
    tempt.huviar=huviar*a.huviar;
    return tempt;
}

rationalnumber rationalnumber::operator=(const rationalnumber &a)
{
    hurtver=a.hurtver;
    huviar=a.huviar;
}
void rationalnumber::operator++()
{
    ++counter;
}
void rationalnumber::operator--()
{
    --counter;
}
void rationalnumber::operator+=(int a)
{
    counter=counter+a;
}
void rationalnumber::operator-=(int a)
{
    counter=counter-a;
}
void rationalnumber::operator*=(int a)
{
    counter=counter*a;
}
void rationalnumber::operator/=(int a)
{
    counter=counter/a;
}
void rationalnumber::operator&()
{
    int i=2;
    int g=huviar/2;
    while(i<=g)
    {
        if(huviar%i==0&&hurtver%i==0)
        {
            hurtver=hurtver/i;
            huviar=huviar/i;
            i=2;
        }
        else i++;
    }
}

