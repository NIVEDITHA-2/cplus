#include<iostream>
using namespace std;
int main()
{
int i,j,n;
cout<<"enter the rows:";
cin>>n;
for(i=0;i<n;i++)
{
    for(j=0;j<i+1;j++)
    {
cout<<" * ";
}
cout<<"\n";
}
return 0;
}