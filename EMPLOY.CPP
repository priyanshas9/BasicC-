#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
    char nm[20];
    int empId;
    float sal;
    cout<<"\nEnter details :\n";
    cout<<"Employee Name:";
    gets(nm);
    cout<<"ID:";
    cin>>empId;
    cout<<"Salary:";
    cin>>sal;
    cout<<"\nEntered details are:\n";
    cout<<"Name: "<<nm;
    cout<<"EmployeeID"<<empId;
    cout<<"Salary:"<<sal;
    return 0;
}