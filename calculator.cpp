//Task1: Calculator
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{   
for(;;)
{   int n;
	float num1,num2;
char ch;
	 cout<<"-------------"<<endl;
	cout<<"7  8  9  /"<<endl;
	cout<<"4  5  6  x"<<endl;
	cout<<"1  2  3  -"<<endl;
	cout<<"   O     +"<<endl;
	cout<<"-------------"<<endl;
    cin>>num1;
    cin>>ch;
    cin>>num2;
   cout<<"---------------"<<endl;
	switch(ch)
	{
		case '+':
			{
				cout<<"="<<num1+num2<<endl;
				break;
			}
			case '-':
				{
					cout<<"="<<num1-num2<<endl;
					break;
				}
				case 'x':
					{
						cout<<"="<<num1*num2<<endl;
						break;
					}
					case'/':
						{
							cout<<"="<<num1/num2<<endl;
							break;
						}
						default:
							cout<<"ERROR!"<<endl;
					
	}
	cout<<"1.CLEAR  "<<"2.OFF"<<endl;
	cin>>n;
	if(n==1)
	{
		continue;
	}
	else
	{
		exit(0);
	}
}

	return 0;
}

