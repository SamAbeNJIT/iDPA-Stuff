#include <iostream>
#include <string>

using namespace std;

void cat()
{
	cout<<"MEOWER ";
}

void main()
{
		int a;
		double b; 
		bool c;
		char d;
		string e;
	
		cout<<"Enter a number 1-30"<<endl;
		cin >> a;
		
		if (a<10)
		{	
			cout<<"Meow"<<endl;
		}
		
		else if (a<20)
		{	
			cout<<"Meow Meow Meow"<<endl;
		}
		else 
		{
			cout<<"ARF ARF RAWRG"<<endl;
		}
		for(b=4.5;b<1000;b++)
		{
		cat();
		}	
	system("pause");
}	