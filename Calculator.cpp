#include <iostream>
using namespace std;
int main()
{
	int a,b,ch;
	ch=0;
	cout<<"\t\t\t***************CALCULATOR***************\t\t\t";
	cout<<"\n\t\t\t________________________________________\t\t\t";
	while(ch!=5)
	{
		cout<<"\n\t\t\t________________________________________\t\t\t";
		cout<<"\n\t\t\t\t      Enter Your choice \n\t\t1.ADDITION\n\t\t2.SUBSTRACTION\n\t\t3.MULTIPLICATION\n\t\t4.DIVISION\n";
	    cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter First Number:";
				cin>>a;
				cout<<"\nEnter Second Number:";
				cin>>b;
				cout<<"\nADDITION:"<<a+b;
				break;
			case 2:
				cout<<"\nEnter First Number:";
				cin>>a;
				cout<<"\nEnter Second Number:";
				cin>>b;
				cout<<"\nSUBSTRACTION:"<<a-b;
				break;
			case 3:
				cout<<"\nEnter First Number:";
				cin>>a;
				cout<<"\nEnter Second Number:";
				cin>>b;
				cout<<"\nMULTIPLICATION:"<<a*b;
				break;
			case 4:
				cout<<"\nEnter First Number:";
				cin>>a;
				cout<<"\nEnter Second Number:";
				cin>>b;
				cout<<"\nDIVISION:"<<a/b;
				break;
			default:
				cout<<"\n\t\t\tInvalid choice!";
				break;
		}
	}
	return 0;
}
