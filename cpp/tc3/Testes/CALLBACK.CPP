#include<iostream.h>
#include<conio.h>

int ffat(int n)
{
if (n<=0)
    return 1;
else
    return (n*ffat(n-1));
}

void main()
{
int x;
cout<<"\nDigite um numero int: ";
cin>>x;
if(x<0)
    {
	cout<<"\n nao existe fatorial negativo!";
    }
    else
    {
	cout<<"\nFatorial  " << x << "!="<<ffat(x);
    }
getch();
}