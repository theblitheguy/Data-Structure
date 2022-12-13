//wap to queue implemantation using head pointer fixed, tail pointer varying.
#include<iostream>
#define maxsize 3
using namespace std;
class Queue
{
    private:
    int front,rear,d[maxsize];
    public:
    Queue(){front=0;rear=-1;}
    void display();
    void enqueue();
    void dequeue();
    void exit();    
};
void Queue::enqueue()
{
    if(rear==maxsize-1)
    {
        cout<<"queue is full."<<endl;
    }
    else
    {
       int dat;
       rear++;
       cout<<"Enter the data:";
       cin>>dat;
       d[rear]=dat; 
    }
}
void Queue::dequeue()
{
    if(rear==-1)
    {
        cout<<"Queue is empty."<<endl;
    }
    else
    {
        cout<<d[front]<<endl;
    for(int i=0;i<rear;i++)
    {
        d[i]=d[i+1];
    }
    rear--;
    }
 }   
void Queue::display()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<"Data are :"<<d[i]<<endl;
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
