#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,t,b;
cout<<"Enter a String\n";
getline(cin,s);
int a=s.length();
string::iterator it;
for(it=s.end();it>=s.begin();it--)
{
t=t+*it;
}
cout<<" Reversed String : "<<t<<endl;
return 0;
}
