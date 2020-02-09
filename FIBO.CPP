#include <iostream.h>
#include<conio.h>
int main()
{   clrscr();
    int i, n, prev= 0, curr = 1, next;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    for (i = 1; i <= n; ++i)
    {
	cout<<prev<<"\t";
        next= prev + curr;
        prev = curr;
        curr = next;
    }
    return 0;
}
