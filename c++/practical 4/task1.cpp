#include<iostream>
namespace first
{
void say()
{
std::cout<<"hello\n";
}
}
namespace second
{
void say()
{
std::cout<<"world\n";
}
}
int main()
{
say();
say();
return 0;
}
