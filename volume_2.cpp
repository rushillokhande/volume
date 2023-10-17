#include<iostream>
using namespace std;
int volume(int r)
{
return (r*r*r);
}
double volume(double r,double h)
{
return (3.14*r*r*h);
}
int volume(int l,int b,int h)
{
return (l*b*h);
}
int main()
{
int a,b,ch,e;
double c,d;
do 
{
cout<<"Menu";
cout<<"\n1.volume of cube:";
cout<<"\n2.volume of cylinder:";
cout<<"\n3.volume of cuboid:";
cout<<"\n4.exit";
cout<<"\nenter choice:";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"\nenter length for volume of cube:";
cin>>a;
a=volume(a);
cout<<"\nvolume of cube is "<<a;
cout<<"\n";
break;
}
case 2:
{
cout<<"\nenter radius:";
cin>>c;
cout<<"\nenter height:";
cin>>d;
c=volume(c,d);
cout<<"\nvolume of cylinder is "<<c;
cout<<"\n";
break;
}
case 3:
{
cout<<"\nenter length:";
cin>>a;
cout<<"\nenter breadth:";
cin>>b;
cout<<"\nenter height:";
cin>>e;
e=volume(a,b,e);
cout<<"\nvolume of cuboid is "<<e;
cout<<"\n";
break;
}
case 4:
{
cout<<"\nEXITING.....";
cout<<"\n";
break;
}
default:
ch=int(ch);
cout<<"\nINVALID CHOICE...!";
cout<<"\nenter valid number only:";
cin>>ch;
cout<<"\n";
break;
}
}while(ch!=4);
return 0;
} 
