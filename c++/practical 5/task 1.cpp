#include<iostream>
#include<limits>
#include<cfloat>
using namespace std;
void data_size()
{

    cout<<"------------------SIZE OF DATA TYPES -------------------\n";
    cout<<"size of bool data type : "<<sizeof(bool)<<endl;
    cout<<"size of short data type : "<<sizeof(short)<<endl;
    cout<<"size of char data type : "<<sizeof(char)<<endl;
    cout<<"size of int data type : "<<sizeof(int)<<endl;
    cout<<"size of float data type : "<<sizeof(float)<<endl;
    cout<<"size of long data type : "<<sizeof(long)<<endl;
    cout<<"size of double data type  : "<<sizeof(double)<<endl;
    cout<<"size of long double data type : "<<sizeof(long double)<<endl;
    cout<<"size of wide char data type : "<<sizeof(wchar_t)<<endl;
}
void data_varsize()
{
    bool a=(6<2);
    short b=871;
    char c='A';
    int d=8911;
    float e=48.1234f;
    long f=92123;
    double g=9291.9191;
    long double h=291291.12712;
    wchar_t  i=L'A';

    cout<<"------------------SIZE OF VARIABLES -------------------\n";
    cout<<"size of bool data type : "<<sizeof(a)<<endl;
    cout<<"size of short data type : "<<sizeof(b)<<endl;
    cout<<"size of char data type : "<<sizeof(c)<<endl;
    cout<<"size of int data type : "<<sizeof(d)<<endl;
    cout<<"size of float data type : "<<sizeof(e)<<endl;
    cout<<"size of long data type : "<<sizeof(f)<<endl;
    cout<<"size of double data type  : "<<sizeof(g)<<endl;
    cout<<"size of long double data type : "<<sizeof(h)<<endl;
    cout<<"size of wide char data type : "<<sizeof(i)<<endl;
}   
void data_range()
{
    cout<<"=------------------RANGE OF DATA TYPES-------------------\n";
    cout<<"Bool shows only 2 values : 0 or 1"<<endl;
    cout<<"Range of short ( "<<SHRT_MIN <<" to "<<SHRT_MAX<<" )"<<endl;
    cout<<"Range of char ( "<<CHAR_MIN <<" to "<<CHAR_MAX<<" )"<<endl;
    cout<<"Range of int ( "<<INT_MIN <<" to "<<INT_MAX<<" )"<<endl;
    cout<<"Range of float ( "<<FLT_MIN<<" to "<<FLT_MAX<<" )"<<endl;
    cout<<"Range of long ( "<<LONG_MIN <<" to "<<LONG_MAX<<" )"<<endl;
    cout<<"Range of double ( "<<CHAR_MIN <<" to "<<CHAR_MAX<<" )"<<endl;
    cout<<"Range of long double ( "<<LDBL_MIN<<" to "<<LDBL_MAX<<" )"<<endl;
    cout<<"Range of wide char ( "<<WCHAR_MIN <<" to "<<WCHAR_MAX<<" )"<<endl;
}
int main()
{
 data_size();
 data_varsize();
 data_range();
return 0;
}
