#include<iostream.h>
int main()
{
	int num,fact=1,i;
	cout<<"Enter any number : ";
	cin>>num;
	for(i=num;i>0;i--)
	{
		fact=fact*i;
	}
	cout<<"Factorial is:"<<fact;
	return 0;
}
