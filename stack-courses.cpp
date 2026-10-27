#include<iostream>
using namespace std;
const int size=10;
struct stack
{
	string courses[size];
    int top;	
};
 void push(stack &s,string courses)
 {
 	if (s.top==size-1)
 	{
	 	cout<<"the stack is full"<<endl;
	 }
	 else
	 	{
 		s.top++;
 		s.courses[s.top]=courses;
    	}
 	
 }
 void pop(stack &s)
 {
 	if (s.top==-1)
 	 {
	 	cout<<"the stack is empty"<<endl;
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
		cout<<s.courses[i]<<endl;
	}	
	}
	
  int main()
  {
  	stack s;
  	s.top=-1;
  	push(s,"Data structures");
  	push(s," c++");
    push(s,"Database");
  	push(s,"Artificial intelligence");
  	pop(s);
    pop(s);
    cout<<"_________the final outcome__________"<<endl;
    print(s);
    return 0;
  }