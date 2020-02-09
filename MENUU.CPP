#include<iostream.h>
#include<conio.h>
int main( )
{    clrscr();
int a,b,c,d,e,f;
char ch;
cout<<"Enter 1st number\n";
cin>>a;
cout<<"Enter 2nd number\n";
cin>>b;
cout<<"Enter choice(operator +,-,*,/) \n";
cin>>ch;
switch(ch)
{
case '+':
c=a+b;
cout<<"Result :"<<c;
break;
case '-':
d=a-b;
cout<<"Result :"<<d;
break;
case '*':
e=a*b;
cout<<"Result :"<<e;
break;
case '/':
f=a/b;
cout<<"Result :"<<f;
break;
}
return 0;
}
