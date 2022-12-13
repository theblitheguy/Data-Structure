//wap to queue implemantation using both head and tail pointer variable.(linear queue)
#include<iostream>
#define maxsize 3
using namespace std;
class queue
{
    private:
    int front,rear,d[maxsize];
    public:
    queue(){front=0;rear=-1;}
    void display();
    void enqueue();
    void dequeue();
    void exit();    
};
void queue::enqueue()
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
void queue::dequeue()
{
    if(front>rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<d[front]<<endl;
        front++;
    }
}
void queue::display()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<"Data are :"<<d[i]<<endl;
    }
}
int main()
{
    int ch;
    queue s1;
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
