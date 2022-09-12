#include<iostream>
using namespace std;
class vector
{
int x,a[100];
public:
vector(int n){
x=n;
}
friend int vec(vector &obj1);
};
int vec(vector &obj1){
int i,j;
for(i=0;i<obj1.x;i++){
cout<<"\nenter the element "<<i+1<<" in an array : ";
cin>>obj1.a[i];
}
for(i=0;i<obj1.x;i++){
cout<<obj1.a[i]<<" ";
}
return 0;
}
int main()
{
int n1,a1;
cout<<"\nenter the no of elements in an array : ";
cin>>n1;
vector v1(n1);
a1=vec(v1);
return 0;
}
