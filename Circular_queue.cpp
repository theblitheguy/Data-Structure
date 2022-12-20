#include<iostream>
#define maxsize 5
using namespace std;
class Queue
{
    private:
    int front,rear,dat,d[maxsize];
    public:
    Queue(){front=-1;rear=-1;}
    void display();
    void enqueue();
    void dequeue();
    void exit();
};
void Queue::enqueue()
{
    if(rear==-1)
    {
        rear=0;
        front=0;
        cout<<"Enter the values :";
        cin>>dat;
        d[rear]=dat;
    }
    else
    if(front==(rear+1)%maxsize)
    cout<<"Queue is overflow."<<endl;
    else
    {
        rear=(rear+1)%maxsize;
        cout<<"Enter the values :";
        cin>>dat;
        d[rear]=dat;
    }
}
void Queue::dequeue()
{
    if(front==-1)
    {
        cout<<"Queue is overflow."<<endl;
    }
    else
    {
    dat=d[front];
    if(front==rear)
      front=rear-1;
    else
    {
        front=((front+1)%maxsize);
        cout<<dat<<endl;
    }
    }
}
void Queue::display()
{
    if(front>rear)
    {
        for(int i=front;i<=maxsize-1;i++)
        {
            dat=d[i];
            cout<<dat<<endl;
        }
        for(int i=0;i<=rear;i++)
        {
            dat=d[i];
            cout<<dat<<endl;
        }
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            dat=d[i];
            cout<<dat<<endl;
        }
    }
}
int main()
{
    int ch;
    Queue s1;
    cout<<"1.Display\n2.Enqueue\n3.Dequeue\n4.Exit"<<endl;
    while(1)
    {
        cout<<"Enter the choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:
            s1.display();
            break;
            case 2:
            s1.enqueue();
            break;
            case 3:
            s1.dequeue();
            break;
            case 4:
            exit(0);
            default:
            cout<<"INVALID CHOICE"<<endl;
        }
    }
  return 0;
}

    
