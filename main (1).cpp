#include<iostream>
#include <stdio.h>
#define SIZE 5
using namespace std;

int top=-1;
int stack_arr[SIZE];
 /* bool is_empty()
{ 
 
 	if (top=-1)
 		return true;
 	else
		return false;
 }*/
  int push(int data)
  {
  	if(top==SIZE-1)
  	{
  		cout<<"stack is full: "<<endl;
	  }
	  else
  	top=top+1;
  	stack_arr[top]=data;
  }
  int pop()
  {
  int value;
  if(top==-1)
  {
  	cout<<"stack underflow"<<endl;
  }
  else
  value = stack_arr[top];
  top=top-1;
  cout<<"the which is popped is : "<<value<<endl;
  return value;
}
void display(){

if (top==-1)
{
	cout<<"stack underflow"<<endl;
}
else
for(int i=0; i<=top; i++)
{
	cout<<stack_arr[i]<<endl;
}
}
int main()
{

push(10);
push(20);
display();
pop();
display();

return 0;

} 

