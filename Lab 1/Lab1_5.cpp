#include<iostream>
using namespace std;
int main()
{
int i;
cout<<"Enter String"<<endl;
string s;
cin>>s;
for(i=0;s[i]!='\0';i++);
cout<<i;
return 0;
}
