#include<iostream>
using namespace std;

// simple calculator
int main()
{
	char op;
	cout<<"Enter the operation which you want to perform "<<endl;
	cin >> op;
	
	
	int value1,value2;
	cout<<"Enter value 1:"<<endl;
	cin >> value1;
	
		
	cout<<"Enter value 2:"<<endl;
	cin >> value2;
	
	switch(op)
	{
		case '+': cout<<(value1+value2)<<endl;
		        break;
		
		case '-': cout<<(value1-value2)<<endl;
		        break;
		
		case '*': cout<<(value1*value2)<<endl;
		        break;
		
		case '/': cout<<(value1/value2)<<endl;
	        	break;
		
		case '%': cout<<(value1%value2)<<endl;
		        break;
		
		default: cout<<"Please enter a valid operation"<<endl;
	}
	
	return 0;
}