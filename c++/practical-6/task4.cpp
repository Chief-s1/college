#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string a,b;
    int ch,c,m;
    cout<<"Enter String a\n";
    getline(cin,a);
    cout<<"Enter String b\n";
    getline(cin,b); 
    int l1=a.length();
    int l2=b.length();
    string::iterator it1;
    string::iterator it2; 
     it1=a.begin();
     it2=b.begin();
    
    cout<<" 1. to compare using function\n2. To compare manually\n3. exit\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
                c= a.compare(b);
               if(c==0)
               cout<<"Strings Are Equal\n";
               else if(c>0)
               cout<<"Strings a is geater than String b\n";
               else
               cout<<"String b is greater than string a\n";
               break;
               
        case 2: 
                 m=0;
                if(l1==l2)
                {  
                   while(it1!=a.end()||it2!=b.end()) 
                   {
                        if(*it1==*it2) 
                        {
                        m++;
                        }
                        it1++;
                        it2++;
                   } 
                   
                   if(m==l1)
                   cout<<"Strings are Equal\n";
                   else
                   cout<<"Strings are Not Equal\n";
                } 
                else
                cout<<"Strings are Not Equal\n";
                break; 
                
         default: cout<<"Invalid Choice\n";
    } 
    return 0;
}
