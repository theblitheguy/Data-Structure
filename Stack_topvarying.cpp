/* Stack implementation using Arry (top varying method) */
#include<iostream>
#define MAXSIZE 5

using namespace std;
class stack
{
	private:
		int top, s[MAXSIZE];
	public:
		stack(){top=-1;}
		void push();
		void pop();
		void display();
		
};

void stack::push()
{
	int n;
	if (top == MAXSIZE-1)
	{
		cout<<"Stack is full"<<endl;
		
	}
	else 
	{
		cout<<"Enter the data to push :";
		cin>>n;
		s[top+1]=n;
		top++;
	}
}

void stack::pop()
{
	if(top==1)
	{
		cout<<"Stack is empty :"<<endl;
	}
	else {
		cout<<s[top]<<endl;
		top--;
	}
}

void stack::display()
{
	for(int i=0;i<=top;i++)
	{
		cout<<s[i]<<endl;
	}
}


int main()
{
	int ch,n;
	stack s;
	cout<<"stack operation"<<endl;
	cout<<"1.display\n2.push\n3.pop\n4.exit"<<endl;
	while(1)
	{
		cout<<"enter the choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
					s.display();
					break;
			case 2:
					s.push();
					break;
			case 3:
					s.pop();
					break;
			case 4:
					exit(0);
					break;
			default:
			{
				cout<<"choice is invalid"<<endl;
				break;
			}
		}
	}
	return 0;
}
				
				
				
				
				
				
				
				
		
