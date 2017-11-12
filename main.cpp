#include<iostream>
#include "function.h";
using namespace std;
int main()
{
    rationalnumber s,a,b;
    float k=0.2;
    cout<<"baiguulagch function aar ogson too"<<endl;
    cout<<"6"<<endl<<"--"<<endl<<"4"<<endl;
    cout<<"nemeh:\n"; s=a+b; &s; s.getdata();
    cout<<"\nnemeh 0.2:\n"; s=a+k; &s; s.getdata();
    cout<<"\nurjih:\n"; s=a*b; &s; s.getdata();
    cout<<"\nhuvaah:\n"; s=a/b; &s; s.getdata();
    cout<<"\nhasah:\n"; s=a-b; &s; s.getdata();
    cout<<"\nutga onooh operator =:\n"; b=rationalnumber(8,5); a=b; &a; a.getdata();
    cout<<"\n++ operator\n"; ++a.counter; cout<<a.counter<<endl;
    cout<<"\n-- operator\n"; --a.counter; cout<<a.counter<<endl;
    cout<<"\n+=20 operator\n"; a.counter+=20; cout<<a.counter<<endl;
    cout<<"\n-=2 operator\n"; a.counter-=2; cout<<a.counter<<endl;
    cout<<"\n*=2 operator\n"; a.counter*=2; cout<<a.counter<<endl;
    cout<<"\n/=2 operator\n"; a.counter/=2; cout<<a.counter<<endl;
}

