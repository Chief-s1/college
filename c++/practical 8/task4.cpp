#include<iostream>
using namespace std;
long int fact(int n)
 {
  long s= 1;
   for(int i = 1 ; i <= n ; i++)
   {
      s*=i;
   }
   return s;
 }
int main()
{
    int num;
  	cout << "Enter the number : "<<endl;
  	cin >> num;
  	cout << fact(num) << endl;
    return 0;
}
