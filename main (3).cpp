#include <iostream>
#include <conio.h>
using namespace std;
#define SIZE 10
int top=-1;
int stack_arr[SIZE];
int push()
{
	int value;
	if(top==SIZE-1)
	{
		cout<<"stack is full : "<<endl;
	}
	else
	cout<<"enter the value in the stack : "<<endl;
	cin>>value;
	top=top+1;
	stack_arr[top]=value;
//	cout<<"top"<<top<<endl;
//	cout<<"value"<<value<<endl;
}
int pop()
{
	int value_1;
	if(top==-1)
	{
		cout<<"stack is empty! "<<endl;
	}
	else
		cout<<"the value which is popped is : "<<stack_arr[top]<<endl;
	value_1=stack_arr[top];
	top--;
	return value_1;
}
int display()
{
	if(top==-1)
{
	cout<<"the stack is empty : "<<endl;
}
else
cout<<"the values in the stack is : "<<endl;
for (int i=0; i<=top; i++)
{
	cout<<stack_arr[i]<<endl;
}
}
int main()
{
	int ch;
	cout<<"1) Insert element to the stack : "<<endl;
	cout<<"2) Delete the element fron the stack : "<<endl;
	cout<<"3) Display the element int stack : "<<endl;
	cout<<"4) Exit "<<endl<<endl;
	
	
	
	do
	{
	cout<<"Enter your choice :"<<endl;
	cin>>ch;
		switch (ch)
		{
		case 1:	push();
		break;
		case 2: pop();
		break;
		case 3: display();
		break;
		case 4: cout<<"Exit"<<endl;
		break;
		default: cout<<"Invalid choice "<<endl;
		}
			
	}
	while(ch!=4);

	return 0;
}
