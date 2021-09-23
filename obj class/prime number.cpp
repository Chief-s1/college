#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int  n,flag=0;
cout<<"enter a number :";
cin>>n;
for(int i=2;i<=sqrt(n);i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(n==1)
cout<<"not a prime number";
else
cout<<"prime number";

return 0;
}
