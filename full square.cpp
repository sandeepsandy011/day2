#include<iostream>
using namespace std;
int main()
{
int r,i,j,k;
char sym ;
cout<<"\nenter the no of rows : ";
cin>>r;
cout<<"\nenter the symbol to show : ";
cin>>sym;
for(i=0;i<r;i++){
for(j=0;j<r;j++){
cout<<sym<<" ";
}
cout<<"\n ";
}
return 0;
}
