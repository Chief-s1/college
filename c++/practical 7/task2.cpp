#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int a[3][3];
    cout<<"Enter the elements\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        cin>>a[i][j];
    } 
    cout<<"The elements:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        cout<<10-a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
