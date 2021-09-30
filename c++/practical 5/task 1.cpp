#include<iostream>
#include<limit.h>
#include<float.h>
using namespace std;
void charcall()
{
cout<<"size of char : "<<sizeof(char)<<"Range ="<<
       char c='A';
       cout<<c<<endl;
}
void boolFunc()
{
       bool b=-1;
       if(b==true)
       {
              b=false;
       }
       cout<<b<<endl;
}
void shortFunc()
{
       short s=23;
       cout<<s<<endl;
}
void intFunc()
{
       int i=199;
       cout<<i<<endl;
}
void longFunc()
{
       long l=111111111;
       cout<<l<<endl;
}
void floatFunc()
{
       float f=1.111111f;
       cout<<f<<endl;
}
void doubleFunc()
{
       double d=1.11111111111111;
       cout<<d<<endl;
}
void longDoubleFunc()
{
       long double ld=1.11111111111111;
       cout<<ld<<endl;
}
void wideFunc()
{
       wchar_t w=L'A';
       cout<<w<<endl;
}
int main()
{
       charcall();
       boolcall();
       shortcall();
       intcall();
       longcall();
       floatcall();
       doublecall();
       longDoublecall();
       widecall();
       return 0;
}
