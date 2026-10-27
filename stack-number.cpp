
#include<iostream>              
using namespace std;
const int size=5;               
struct stack
{
	int number[size];
	int top;
};
void push(stack &s,int number)
{
if (s.top==size-1)
  {
	cout<<"the stack is full";
  }
else
  {
   s.top++;
   s.number[s.top]=number;
  }	
}
void pop(stack &s)
{
  if(s.top==-1)
  {
  	cout<<"the stack is empty";
  }	
  else
  	{
  	s.top--;
  }
}
void print (stack s)
	{
				int i;
		for(i=s.top; i>=0; i--)
	{
		cout<<s.number[i]<<endl;
	}
	}

    int main()
    {
    stack s;
	s.top=-1;	
    push(s,10);
    push(s,20);
    push(s,30);
    pop(s);
    push(s,40);
    cout<<"___________the final outcome_________"<<endl;
    print(s);
    return 0;
	}
	