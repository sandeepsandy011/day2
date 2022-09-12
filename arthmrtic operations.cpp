#include<iostream>
using namespace std;
inline void add(int a,int b)
{
cout<<"\naddition : "<<a+b;
}
inline void sub(int a,int b)
{
cout<<"\nsubtraction : "<<a-b;
}
inline void mul(int a,int b)
{
cout<<"\nmultilpication : "<<a*b;
}
inline void div(int a,int b)
{
cout<<"\ndivision : "<<a/b;
}
inline void mod(int a,int b)
{
cout<<"\nmodulus : "<<a%b;
}
int main()
{
int a,b;
cout<<"\nenter the num 1 :";
cin>>a;
cout<<"\nenter the num 2 :";
cin>>b;
add(a,b);
sub(a,b);
mul(a,b);
div(a,b);
mod(a,b);
return 0;
}
