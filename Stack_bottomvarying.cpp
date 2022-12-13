/* Stack implementation using Arry (bottom varying method) */
#include<iostream>
#define MAXSIZE 5
using namespace std;
class Stack
{
    private:
        int bos,n,st[MAXSIZE];
    public:
        Stack(){bos=0;}
        void display();
        void push();
        void pop();
};

void Stack::push()
{
    if (bos==MAXSIZE)
    cout<<"Stack is full"<<endl;
    else
    {
        for(int i=bos;i>0;i--)
        {
            st[i]=st[i-1];
        }
        cout<<"Enter the data to push:";
        cin>>n;
        st[0]=n;
        bos++;
    }
}

void Stack::pop()
{
    int n;
    if(bos==0)
    {
    cout<<"Stack is empty"<<endl;
    }
    else
    {
        n=st[0];
        bos--;
        for(int i=0;i<bos;i++)
        {
            st[i]=st[i+1];
        }
        cout<<n<<endl;
    }
}

void Stack::display()
{
    for(int i=0;i<bos;i++)
    {
        cout<<st[i]<<endl;
    }
}

int  main()
{
    int ch;
    Stack s1;
    cout<<"1.Display\n2.push\n3.pop\n4.exit"<<endl;
    while(1)
    {
    cout<<"Enter the choice :";
    cin>>ch;
    switch (ch)
      {
        case 1:
               s1.display();
               break;
        case 2:
               s1.push();
            break;
        case 3:
               s1.pop();
               break;
        case 4:
               exit(0);
        default:
        {
            cout<<"INVALID CHOICE"<<endl;
        }
      }
    }
 return 0;
}
        

        
    
        
