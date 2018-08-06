#include<iostream>
using namespace std;
int main()
{
int n,i,c=0;
cout<<"Enter the multidigit number to count--";
cin>>n;
while(n>0)
{
n=n/10;
c=c+1;
}
cout<<"NO. of digits"<<c<<endl;
return 0;
}
