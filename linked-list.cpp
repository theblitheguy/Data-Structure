//Insertion and deletion in a linked list from begining
#include<iostream>
#include<stdlib.h>
using namespace std;

class Node{
    public:
    int info;
    Node *link;
};

class Stack{
    public:
    Node *top;
    Node *next;
    Stack(){top = NULL;}
    void Display();
    void push();
    void pop();
};

void Stack::push(){
    next = (Node *)malloc(sizeof(Node));
    int dataIn;
    if(next== NULL)
    cout<<"List is full"<<endl;
    else{
        cout<<"Enter data:";cin>>dataIn;
        next->link = top;
        next->info = dataIn;
        top = next;
    }
}
void Stack::pop(){
    if(top==NULL)
    {
        cout<<"MEMORY EMPTY"<<endl;
    }
    else
    {
    Node *temp;
    temp = top;
    top = top->link;
    cout<<"Item deleted is:"<<temp->info<<endl;
    free(temp);
}
}
void Stack::Display(){
    Node *ptr;
    ptr = top;
    if(ptr==NULL)
    {
        cout<<"STACK IS EMPTY"<<endl;
    }
    else
    {
    while(ptr != NULL){
        cout<<ptr->info;
        ptr = ptr->link;
    }
    }
    cout<<endl;
}
int main(){
    Stack S1;
    int ch;
    cout<<"1.Display\n2.Push\n3.Pop\n4.Exit"<<endl;
    while(1){
        cout<<"Enter the Choice: ";cin>>ch;
        switch(ch){
            case 1:
            S1.Display();
            break;

            case 2:
            S1.push();
            break;

            case 3:
            S1.pop();
            break;

            case 4:
            exit(0);

            default:
            cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
