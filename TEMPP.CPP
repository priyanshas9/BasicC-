#include <iostream.h>
#include<conio.h>
int main()
{                clrscr();
    float fahrenheit, celcius;
    int choice;
    cout << "Enter 1 : Fahrenheit to celcius \nEnter 2 : Celcius to Fahrenheit" << endl; cin >> choice;
    if (choice == 1)
    {
	cout << "Enter the Fahrenheit value :" << endl; cin >> fahrenheit;
	celcius = (fahrenheit - 32) * 5/9 ;
	cout << "It is " << celcius << " degree celcius" << endl;
    }
    else if (choice == 2)
    {
	cout << "Enter the Celcius value :" << endl; cin >> celcius;
	fahrenheit = ((9/5) * celcius) + 32;
	cout << "It is " << fahrenheit << " degree Fahrenheit" << endl;
    }
    else
    {
	//7
	cout << "Please enter a valid input" << endl;
    }
    return 0;
}